#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    int nums[size];

    for(int x = 0; x < size; x++) {
        int temp = 0;
        cin >> temp;
        nums[x] = temp;
    }

    for(int x = size-1; x >= 0; x--) {
        cout << nums[x] << "\n";
    }

    return 0;
}