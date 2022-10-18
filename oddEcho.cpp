#include <iostream>
//#include <string>
using namespace std;
int main() {
    int size;
    cin >> size;

    for(int x = 1; x <= size; x++) {
        string temp;
        cin >> temp;

        if(x%2 != 0) cout << temp << endl;
    }
}