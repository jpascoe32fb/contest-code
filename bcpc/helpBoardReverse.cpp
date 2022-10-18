#include <iostream>
#include <string>
#include <map>
#include <stdio.h>

using namespace std;

map<char, int> boardSpots;

int main() {
    boardSpots['a'] = 0;
    boardSpots['b'] = 1;
    boardSpots['c'] = 2;
    boardSpots['d'] = 3;
    boardSpots['e'] = 4;
    boardSpots['f'] = 5;
    boardSpots['g'] = 6;
    boardSpots['h'] = 7;

    char board[8][8];
    for(int x = 0; x < 8; x++) {
        for(int y = 0; y < 8; y++) {
            board[x][y] = ' ';
        }
    }

    

    return 0;
}