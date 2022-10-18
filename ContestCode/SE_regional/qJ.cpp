#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAX_CHAR 256

int findRepeat(string s) {
    int p = -1, i, k;

    int hash[MAX_CHAR] = {0};

    int pos[MAX_CHAR];

    for(i=0;i<s.length();i++) {
        k = (int) s[i];
        if(hash[k]==0) {
            hash[k]++;
            pos[k] = i;
        } else if (hash[k] == 1) {
            return 0;
        }
    }
    return 1;
}

int main() {
    string word;

    cin >> word;

    cout << findRepeat(word);

    return 0;
}