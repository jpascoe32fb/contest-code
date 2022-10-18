#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<string, long> list;

void findWord(string word) {
    if(list.find(word) != list.end()) {//found
        cout << list[word] << endl;
    } else {
        cout << 0 << endl;
    }
}

void adjList(string word) {
    while(word.size() > 0) {
        if(list.find(word) != list.end()) {//found
            list[word]++;
        } else {//not found
            list.insert({word, 1});
        }
        word.pop_back();
    }
}

int main() {
    //list.rehash(10);

    long words = 0;
    cin >> words;

    for(int wrd = 0; wrd < words; wrd++) {
        string word;
        cin >> word;
        findWord(word);
        adjList(word);
    }


    return 0;
}