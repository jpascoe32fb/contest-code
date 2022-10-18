#include <iostream>
#include <string>
using namespace std;

int main() {
    int groups;
    cin >> groups;

    for(int grp = 0; grp < groups; grp++) {
        int gnomes = 0; 
        cin >> gnomes;
        
        int gprev, g;
        cin >> gprev >> g;
        for(int index = 2; index < gnomes; index++) {
            if(g != gprev+1) {
                cout << index << endl;
                string temp;
                getline(cin, temp);
                break;
            } else {
                gprev = g;
                cin >> g;
            }
        }

    }
}