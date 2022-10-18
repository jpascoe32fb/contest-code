#include <iostream>
using namespace std;

int find(char guess, char ans[]) {
    int ret = 0;
    for(int j = 0; j < 9; j++) {
        if(guess == ans[j]) {
            ret++;
            ans[j] = 'z';
            continue;
        }
    }
    return ret;
}

int main() {
    int green=0;
    int yellow=0;

    char ans[9] = {' '};
    char guess[9] = {' '};

    for(int i = 0; i < 9; i++) {
        char temp;
        cin >> temp;
        ans[i] = temp;
    }
    for(int i = 0; i < 9; i++) {
        char temp;
        cin >> temp;
        guess[i] = temp;
        if(guess[i] == ans[i]) {
            green++;
            guess[i] = 'f';
            ans[i] = 'j';
        }
    }
    
    for(int i = 0; i < 9; i++) {
        yellow+=find(guess[i], ans);
        //cout << ans[4] << "\n";
    }
    cout << green << "\n" << yellow << endl;
}