// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

#include <algorithm>
#include <chrono>
#include <iostream>
#include <random>
#include <stack>
#include <string>
#include <vector>
using namespace std;

enum Cell { EMPTY = '.', BLUE = 'X', RED = 'O' };

class HexGame {
   private:
    int size;
    vector<vector<char>> board;
    char humanPlayer;
    char aiPlayer;
    char currentPlayer;
    mt19937 rng;

   public:
    HexGame(int n = 11) : size(n), board(n, vector<char>(n, EMPTY)) {
        unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
        rng.seed(seed);
    }

    void setupPlayers() {
        cout << "Choose your color: (X for Blue, O for Red): ";
        char choice;
        cin >> choice;
        if (choice == 'X' || choice == 'x') {
            humanPlayer = BLUE;
            aiPlayer = RED;
        } else {
            humanPlayer = RED;
            aiPlayer = BLUE;
        }
        currentPlayer = BLUE;  // Blue always starts
    }

    void printBoard() {
        cout << "\n  ";
        for (int i = 0; i < size; ++i) cout << i << " ";
        cout << endl;

        for (int i = 0; i < size; ++i) {
            cout << i << " " << string(i, ' ');
            for (int j = 0; j < size; ++j) {
                cout << board[i][j];
                if (j != size - 1) cout << " ";
            }
            cout << endl;
        }
    }

    bool isValidMove(int r, int c) {
        return r >= 0 && r < size && c >= 0 && c < size && board[r][c] == EMPTY;
    }

    void makeMove(int r, int c, char player) { board[r][c] = player; }

    void switchPlayer() {
        currentPlayer = (currentPlayer == BLUE) ? RED : BLUE;
    }

    bool gameOver(char player) {
        vector<vector<bool>> visited(size, vector<bool>(size, false));
        if (player == BLUE) {
            for (int col = 0; col < size; ++col)
                if (board[0][col] == player && dfs(0, col, visited, player))
                    return true;
        } else {
            for (int row = 0; row < size; ++row)
                if (board[row][0] == player && dfs(row, 0, visited, player))
                    return true;
        }
        return false;
    }

    bool dfs(int r, int c, vector<vector<bool>> &visited, char player) {
        if (player == BLUE && r == size - 1) return true;
        if (player == RED && c == size - 1) return true;

        visited[r][c] = true;
        int dr[] = {-1, -1, 0, 0, 1, 1};
        int dc[] = {0, 1, -1, 1, -1, 0};

        for (int i = 0; i < 6; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < size && nc >= 0 && nc < size &&
                board[nr][nc] == player && !visited[nr][nc]) {
                if (dfs(nr, nc, visited, player)) return true;
            }
        }
        return false;
    }

    vector<pair<int, int>> getEmptyCells() {
        vector<pair<int, int>> moves;
        for (int r = 0; r < size; ++r)
            for (int c = 0; c < size; ++c)
                if (board[r][c] == EMPTY) moves.emplace_back(r, c);
        return moves;
    }

    int simulateRandomGame(vector<vector<char>> simBoard, pair<int, int> move,
                           char simPlayer) {
        simBoard[move.first][move.second] = simPlayer;
        char turn = (simPlayer == BLUE) ? RED : BLUE;

        auto empty = getEmptyFrom(simBoard);
        shuffle(empty.begin(), empty.end(), rng);

        for (auto &p : empty) {
            simBoard[p.first][p.second] = turn;
            turn = (turn == BLUE) ? RED : BLUE;
        }

        return checkWin(simBoard, simPlayer);
    }

    vector<pair<int, int>> getEmptyFrom(const vector<vector<char>> &b) {
        vector<pair<int, int>> empty;
        for (int r = 0; r < size; ++r)
            for (int c = 0; c < size; ++c)
                if (b[r][c] == EMPTY) empty.emplace_back(r, c);
        return empty;
    }

    int checkWin(const vector<vector<char>> &b, char player) {
        vector<vector<bool>> visited(size, vector<bool>(size, false));
        if (player == BLUE) {
            for (int col = 0; col < size; ++col)
                if (b[0][col] == player && dfsCheck(0, col, visited, b, player))
                    return 1;
        } else {
            for (int row = 0; row < size; ++row)
                if (b[row][0] == player && dfsCheck(row, 0, visited, b, player))
                    return 1;
        }
        return 0;
    }

    bool dfsCheck(int r, int c, vector<vector<bool>> &visited,
                  const vector<vector<char>> &b, char player) {
        if (player == BLUE && r == size - 1) return true;
        if (player == RED && c == size - 1) return true;

        visited[r][c] = true;
        int dr[] = {-1, -1, 0, 0, 1, 1};
        int dc[] = {0, 1, -1, 1, -1, 0};

        for (int i = 0; i < 6; ++i) {
            int nr = r + dr[i];
            int nc = c + dc[i];
            if (nr >= 0 && nr < size && nc >= 0 && nc < size &&
                b[nr][nc] == player && !visited[nr][nc]) {
                if (dfsCheck(nr, nc, visited, b, player)) return true;
            }
        }
        return false;
    }

    pair<int, int> getBestMove(char aiPlayer, int trials = 500) {
        auto empty = getEmptyCells();
        pair<int, int> bestMove = empty[0];
        double bestWinRate = -1;

        for (auto &move : empty) {
            int wins = 0;
            for (int t = 0; t < trials; ++t) {
                vector<vector<char>> simBoard = board;
                wins += simulateRandomGame(simBoard, move, aiPlayer);
            }
            double winRate = double(wins) / trials;
            if (winRate > bestWinRate) {
                bestWinRate = winRate;
                bestMove = move;
            }
        }
        return bestMove;
    }

    void playGame() {
        setupPlayers();
        printBoard();

        while (true) {
            if (currentPlayer == humanPlayer) {
                int r, c;
                cout << "Your move (row col): ";
                cin >> r >> c;
                while (!isValidMove(r, c)) {
                    cout << "Invalid move. Try again: ";
                    cin >> r >> c;
                }
                makeMove(r, c, currentPlayer);
            } else {
                cout << "AI is thinking...\n";
                auto move = getBestMove(aiPlayer, 500);
                makeMove(move.first, move.second, aiPlayer);
                cout << "AI moved at: (" << move.first << "," << move.second
                     << ")\n";
            }

            printBoard();

            if (gameOver(currentPlayer)) {
                cout << (currentPlayer == humanPlayer ? "You" : "AI") << " ("
                     << currentPlayer << ") win the game!\n";
                break;
            }

            switchPlayer();
        }
    }
};
