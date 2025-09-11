// Created by Elena Petkovska on 4.6.2025.
//

/* Login + Registration mini project (single file)
 * Build: g++ -std=c++17 login.cpp -o login
 * DB file: users.db (CSV: username,hash,salt)
 *
 * Notes:
 * - This is a learning demo. Do not use std::hash for real security.
 * - No third party libs. Only standard C++17.
 */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <random>
#include <limits>

using namespace std;

struct User {
    string username;
    string hash;  // salted hash
    string salt;
};

static const string DB_FILE = "users.db";

string trim(const string& s) {
    size_t b = s.find_first_not_of(" \t\r\n");
    if (b == string::npos) return "";
    size_t e = s.find_last_not_of(" \t\r\n");
    return s.substr(b, e - b + 1);
}

string genSalt(size_t n = 8) {
    static const char* HEX = "0123456789abcdef";
    random_device rd;
    mt19937 rng(rd());
    uniform_int_distribution<int> dist(0, 15);
    string s; s.reserve(n);
    for (size_t i = 0; i < n; ++i) s.push_back(HEX[dist(rng)]);
    return s;
}

// Very basic salted hash for demo only
string saltedHash(const string& password, const string& salt) {
    hash<string> h;
    size_t v = h(salt + ":" + password);
    // encode as hex
    string out;
    for (int i = sizeof(size_t) * 2 - 1; i >= 0; --i) {
        int nibble = (v >> (i * 4)) & 0xF;
        out.push_back("0123456789abcdef"[nibble]);
    }
    return out;
}

unordered_map<string, User> loadDB() {
    unordered_map<string, User> db;
    ifstream in(DB_FILE);
    string line;
    while (getline(in, line)) {
        line = trim(line);
        if (line.empty()) continue;
        stringstream ss(line);
        string user, hashv, salt;
        if (getline(ss, user, ',') && getline(ss, hashv, ',') && getline(ss, salt, ',')) {
            db[user] = User{user, hashv, salt};
        }
    }
    return db;
}

bool saveDB(const unordered_map<string, User>& db) {
    ofstream out(DB_FILE, ios::trunc);
    if (!out) return false;
    for (auto& kv : db) {
        const User& u = kv.second;
        out << u.username << "," << u.hash << "," << u.salt << "\n";
    }
    return true;
}

void registerUser(unordered_map<string, User>& db) {
    string u, p1, p2;
    cout << "Choose username: ";
    cin >> u;
    if (db.count(u)) {
        cout << "Username already exists.\n";
        return;
    }
    cout << "Choose password: ";
    cin >> p1;
    cout << "Repeat password: ";
    cin >> p2;
    if (p1 != p2) {
        cout << "Passwords do not match.\n";
        return;
    }
    string salt = genSalt();
    string h = saltedHash(p1, salt);
    db[u] = User{u, h, salt};
    if (saveDB(db)) cout << "Registration successful. User created.\n";
    else cout << "Error saving database.\n";
}

bool loginUser(const unordered_map<string, User>& db, string& loggedInAs) {
    string u, p;
    cout << "Username: ";
    cin >> u;
    cout << "Password: ";
    cin >> p;
    auto it = db.find(u);
    if (it == db.end()) {
        cout << "No such user.\n";
        return false;
    }
    const User& usr = it->second;
    if (saltedHash(p, usr.salt) == usr.hash) {
        cout << "Login successful. Welcome, " << u << ".\n";
        loggedInAs = u;
        return true;
    } else {
        cout << "Wrong password.\n";
        return false;
    }
}

void changePassword(unordered_map<string, User>& db, const string& user) {
    auto it = db.find(user);
    if (it == db.end()) return;
    string oldp, newp1, newp2;
    cout << "Old password: ";
    cin >> oldp;
    if (saltedHash(oldp, it->second.salt) != it->second.hash) {
        cout << "Old password incorrect.\n";
        return;
    }
    cout << "New password: ";
    cin >> newp1;
    cout << "Repeat new password: ";
    cin >> newp2;
    if (newp1 != newp2) {
        cout << "Passwords do not match.\n";
        return;
    }
    string newSalt = genSalt();
    it->second.salt = newSalt;
    it->second.hash = saltedHash(newp1, newSalt);
    if (saveDB(db)) cout << "Password changed.\n";
    else cout << "Error saving database.\n";
}

void deleteAccount(unordered_map<string, User>& db, string& user) {
    string confirm;
    cout << "Type your username to confirm delete: ";
    cin >> confirm;
    if (confirm != user) {
        cout << "Confirmation failed.\n";
        return;
    }
    db.erase(user);
    if (saveDB(db)) {
        cout << "Account deleted.\n";
        user.clear();
    } else {
        cout << "Error saving database.\n";
    }
}

void loggedInMenu(unordered_map<string, User>& db, string user) {
    while (true) {
        cout << "\nLogged in as: " << user << "\n";
        cout << "1) Change password\n";
        cout << "2) Delete account\n";
        cout << "3) Logout\n";
        cout << "Choice: ";
        int ch;
        if (!(cin >> ch)) return;
        if (ch == 1) changePassword(db, user);
        else if (ch == 2) { deleteAccount(db, user); if (user.empty()) return; }
        else if (ch == 3) { cout << "Logged out.\n"; return; }
        else cout << "Invalid choice.\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    auto db = loadDB();

    while (true) {
        cout << "\n==== Auth System ====\n";
        cout << "1) Register\n";
        cout << "2) Login\n";
        cout << "3) Exit\n";
        cout << "Choice: ";
        int choice;
        if (!(cin >> choice)) break;

        if (choice == 1) {
            registerUser(db);
        } else if (choice == 2) {
            string who;
            if (loginUser(db, who)) loggedInMenu(db, who);
        } else if (choice == 3) {
            cout << "Goodbye.\n";
            break;
        } else {
            cout << "Invalid choice.\n";
        }
    }
    return 0;
}