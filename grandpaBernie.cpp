#include <iostream>
#include <map>
using namespace std;

int main() {
    long visits;
    cin >> visits;
    map<string, int> visited;

    string place;

    for(int x = 0; x < visits; x++) {
        string tempPlace;
        int tempYear;
        cin >> tempPlace >> tempYear;
        visited.insert(pair<string, int> (tempPlace, tempYear));
        if(x == 0) place = tempPlace;
    }

    long prints;
    cin >> prints;

    for(int y = 0; y < prints; y++) {
        string temp; int idx;
        cin >> temp >> idx;
    }//unless can iterate through same keys diff values, can't solve

    cout << visited[place] << endl;
}