#include <iostream>
#include <map>
using namespace std;

int main() {
    string word;
    cin >> word;

    map<char, int> list;
    int distinct = 0;
    for(int index = 0; index < word.size(); index++) {
        if(list.count(word[index]) == 0) {
            distinct++;
            list[word[index]] = 1;
        } else {
            list[word[index]] += 1;
        }
    }
    if(distinct > 2) {
        cout << distinct - 2;
    } else {
        cout << 0;
    }
}