//
// Created by Elena Petkovska on 14.8.25.
//

// SNIMKI - Аудиториска вежба 3: Класи во C++
// OBJEKTNO-ORIENTIRANO PROGRAMIRANJE
// AUDITORISKI VEZBI 2 - Klasi vo C++
/* 2.3 E-mail */

#include <iostream>
#include <cstring>
using namespace std;

class EmailMessage
{
private:
	char sender[50];
	char receiver[50];
	char subject[50];
	char body[300];

public:
	EmailMessage(char *sender_ = "info@finki.ukim.mk",
	             char *receiver_ = "students@students.finki.ukim.mk",
	             char *subject_ = "Anketa",
	             char *body_ = "Rok za popolnuvanje 31 Januari") {

		strcpy (sender, sender_);
		strcpy (receiver, receiver_);
		strcpy (subject, subject_);
		strcpy (body, body_);
	}

	void show() {
		cout << "From:   \t" << sender << endl;
		cout << "To:     \t" << receiver << endl;
		cout << "----------------------------------" << endl;
		cout << "Subject:\t" << subject << endl;
		cout << "----------------------------------" << endl;
		cout << "Body: " << endl;
		cout << body << endl;
		cout << "ENDS";
	}
};

// Proverka dali adresata e validna
bool valid(char mailAddress[50]) {

	//    char *ptr = strstr(mailAddress, "@"); //stefan@finki.ukim.mk //ptr -> @finki.ukim.mk
	//    if (ptr == nullptr) {
	//        return false;
	//    }
	//    return strstr(ptr, ".") != nullptr;

	int idx = -1;
	for (int i = 0; i < strlen(mailAddress); i++) {
		if (mailAddress[i] == '@') {
			idx = i;
			break;
		}
	}

	if (idx == -1) { //We haven't found a @
		return false;
	} else {
		for (int i = idx; i < strlen(mailAddress); i++) {
			if (mailAddress[i] == '.')
				return true;
		}
		return false;
	}

}

int main() {
	char sender[50];
	char receiver[50];
	char subject[50];
	char body[300];

	cin >> sender >> receiver;
	//cin.getline(subject, 50);
	if (!valid(sender) || !valid(receiver))
	{
		cout << "Sender or receiver has an invalid email address." << endl;
		return 0;
	}

	cin >> subject;
	cin.get();
	cin.getline(body, 300);

	EmailMessage emailMessage (sender, receiver, subject, body);
	emailMessage.show();

	return 0;
}
