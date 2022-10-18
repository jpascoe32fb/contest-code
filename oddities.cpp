#include <iostream>

using namespace std;

int main() {
    int times = 0;
    cin >> times;

    for(int x = 0; x < times; x++) {
        int temp = 0;
        cin >> temp;
        //if(temp < 0) temp = temp - temp*2;

        if(temp%2 == 0) cout << temp << " is even\n";
        else cout << temp << " is odd\n";
    }
}