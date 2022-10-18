#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int cands;
    cin >> cands;
    string end;
    getline(cin, end);
    map<string, string> party;
    map<string, int> votes;

    for(int x = 0; x < cands; x++) {
        string name, part;
        getline(cin, name);
        getline(cin, part);
        party[name] = part;
    }

    int voted;
    cin >> voted;
    for(int vote = 0; vote <= voted; vote++) {
        string name;
        getline(cin, name);
        if(votes.count(name) > 0) {
            votes[name] += 1;
        } else {
            votes[name] = 1;
        }
    }

    map<string, int>::iterator itr;
    string max; int temp = 0;
    for(itr = votes.begin(); itr != votes.end(); itr++) {
        if(itr->second > temp) {
            temp = itr->second;
            max = itr->first;
        } else if(itr->second == temp) {
            max = "tie";
        }
    }
    if(max == "tie") cout << max;
    else cout << party[max];

    return 0;
}