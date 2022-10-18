#include <iostream>
#include <map>
#include <stdio.h>
#include <ctype.h>

using namespace std;

string border = "+---+---+---+---+---+---+---+---+\n";
string blackSqr = ":::";
string whiteSqr = "...";
map<char, int> boardSpots;

bool isOdd(int x) {
    return x%2 != 0;
}

bool isBlackSqr(int x, int y) {
    if((isOdd(x) && isOdd(y)) || (!isOdd(x) && !isOdd(y))) {
         return false;
     }
     return true;
}

int main() {
    boardSpots['a'] = 0; boardSpots['A'] = 0;
    boardSpots['b'] = 1; boardSpots['B'] = 1;
    boardSpots['c'] = 2; boardSpots['C'] = 2;
    boardSpots['d'] = 3; boardSpots['D'] = 3;
    boardSpots['e'] = 4; boardSpots['E'] = 4;
    boardSpots['f'] = 5; boardSpots['F'] = 5;
    boardSpots['g'] = 6; boardSpots['G'] = 6;
    boardSpots['h'] = 7; boardSpots['H'] = 7;

    char board[8][8];
    for(int x = 0; x < 8; x++) {
        for(int y = 0; y < 8; y++) {
            board[x][y] = ' ';
        }
    }

    //Set board pieces
    string white;
    cin >> white;
    char input = ' ';
    while((input = getchar()) != '\n') { //for white pieces
        if(input == ',' || input == ' ') continue;
        if(isupper(input)) { //is not pawn
            char x = getchar(), y = getchar();
            int yval = atoi(&y) - 1;
            board[boardSpots[x]][yval] = input;
        } else { //is pawn
            char y = getchar();
            int yval = atoi(&y) - 1;
            board[boardSpots[input]][y] = 'P';
        }
    }
    string black;
    cin >> black;
    while((input = getchar()) != '\n') { //for black pieces
        if(input == ',' || input == ' ') continue;
        if(isupper(input)) { //is not pawn
            char x = getchar(), y = getchar();
            int yval = atoi(&y) - 1;
            board[boardSpots[x]][yval] = tolower(input);
        } else { //is pawn
            char y = getchar();
            int yval = atoi(&y) - 1;
            board[boardSpots[input]][y] = 'p';
        }
    }

    for(int x = 0; x < 8; x++) {
        for(int y = 0; y < 8; y++) {
            cout << board[x][y] << " ";
        }
        cout << endl;
    }

    //Print board
    cout << border;
    for(int x = 0; x < 8; x++) {
        for(int y = 0; y < 8; y++) {
            cout << '|';
            if(board[y][7-x] == ' ') { //if no piece
                if(isBlackSqr(x+1, y+1)) {
                    cout << blackSqr;
                } else {
                    cout << whiteSqr;
                }
                continue;
            } else { //Is a piece
                if(isBlackSqr(x+1, y+1)) {
                    cout << ":" << board[y][7-x] << ":";
                } else {
                    cout << "." << board[y][7-x] << ".";
                }

            }
        }

        cout << "|\n" << border;
    }

    return 0;
}