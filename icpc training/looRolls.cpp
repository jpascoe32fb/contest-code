#include <iostream>

using namespace std;

int main() {
    long long size, usage;
    cin >> size >> usage;

    int rolls = 1;
    while(size%usage != 0) {
        size += size;
        rolls++;
    }
    cout << rolls;
}