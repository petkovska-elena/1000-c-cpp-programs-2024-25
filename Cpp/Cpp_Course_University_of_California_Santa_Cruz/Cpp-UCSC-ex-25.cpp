// Created by Elena Petkovska on 5.4.2025.
//

/* Cpp Course University of California Santa Cruz */

#include <iomanip>
#include <iostream>
#include <stack>
#include <string>
#include <vector>
using namespace std;

enum Cell { EMPTY = '.', BLUE = 'B', RED = 'R' };

class HexGame {
   private:
    int size;
    vector<vector<char>> board;
    char currentPlayer;

   public:
    HexGame(int n = 7)
        : size(n), board(n, vector<char>(n, EMPTY)), currentPlayer(BLUE) {}

    void printBoard() {
        cout << "\nCurrent Board:\n";
        for (int i = 0; i < size; ++i) {
            cout << string(i, ' ');
            for (int j = 0; j < size; ++j) {
                cout << board[i][j];
                if (j != size - 1) cout << " - ";
            }
            cout << '\n';
            if (i != size - 1) {
                cout << string(i, ' ');
                for (int j = 0; j < size - 1; ++j) {
                    cout << "\\ / ";
                }
                cout << "\\\n";
            }
        }
        cout << '\n';
    }

    bool isValidMove(int row, int col) {
        return row >= 0 && row < size && col >= 0 && col < size &&
               board[row][col] == EMPTY;
    }

    void makeMove(int row, int col) { board[row][col] = currentPlayer; }

    void switchPlayer() {
        currentPlayer = (currentPlayer == BLUE) ? RED : BLUE;
    }

    char getCurrentPlayer() { return currentPlayer; }

    bool hasWon(char player) {
        vector<vector<bool>> visited(size, vector<bool>(size, false));
        if (player == BLUE) {
            for (int col = 0; col < size; ++col) {
                if (board[0][col] == player && dfs(0, col, player, visited))
                    return true;
            }
        } else {
            for (int row = 0; row < size; ++row) {
                if (board[row][0] == player && dfs(row, 0, player, visited))
                    return true;
            }
        }
        return false;
    }

    bool dfs(int row, int col, char player, vector<vector<bool>> &visited) {
        if (player == BLUE && row == size - 1) return true;
        if (player == RED && col == size - 1) return true;

        visited[row][col] = true;

        int dr[] = {-1, -1, 0, 0, 1, 1};
        int dc[] = {0, 1, -1, 1, -1, 0};

        for (int d = 0; d < 6; ++d) {
            int nr = row + dr[d];
            int nc = col + dc[d];

            if (nr >= 0 && nr < size && nc >= 0 && nc < size &&
                board[nr][nc] == player && !visited[nr][nc]) {
                if (dfs(nr, nc, player, visited)) return true;
            }
        }
        return false;
    }

    void playGame() {
        int row, col;
        printBoard();
        while (true) {
            cout << currentPlayer << "'s turn. Enter move (row col): ";
            cin >> row >> col;

            if (!isValidMove(row, col)) {
                cout << "Invalid move! Try again.\n";
                continue;
            }

            makeMove(row, col);
            printBoard();

            if (hasWon(currentPlayer)) {
                cout << currentPlayer << " wins!\n";
                break;
            }

            switchPlayer();
        }
    }
};