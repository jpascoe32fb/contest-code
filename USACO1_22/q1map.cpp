#include <iostream>
#include <map>

using namespace std;

int main() {
    int green = 0; int yellow = 0;
    map<char, int> ansMap;

    unsigned char ans[9] = {' '};
    unsigned char guess[9] = {' '};

    for(int i = 0; i < 9; i++) {
        unsigned char temp;
        cin >> temp;
        ans[i] = temp;
        if(ansMap.find(temp) != ansMap.end()) {
            ansMap[temp] += 1;
        } else {
            ansMap[temp] = 1;
        }
    }
    for(int i = 0; i < 9; i++) {
        unsigned char temp;
        cin >> temp;
        guess[i] = temp;
        if(guess[i] == ans[i]) {
            green++;
            ansMap[guess[i]] -= 1;
            guess[i] = 'f';
            ans[i] = 'j';
        }
    }

    for(int i = 0; i < 9; i++) {
        if(ansMap.find(guess[i]) != ansMap.end()) {
            if(ansMap[guess[i]] > 0) {
            yellow++;
            ansMap[guess[i]] -= 1;
            }
        }
    }

    cout << green << "\n" << yellow << endl;
}