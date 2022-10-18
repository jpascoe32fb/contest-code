#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count,count2;
    vector<int> index;
    int turns=1;

    cin >> count;
    while (count>0) {
        cin >> turns;
        index.push_back(turns);
        turns = 1;
        count--;
    }

    for(int i = 0;i<index.size()-1;i++) {
        count = index[i];
        count2 = index[i+1];
        if(count2<count) {turns++;}
    }
    cout << turns;
}