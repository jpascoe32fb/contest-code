#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    long long a = 0, b = 0;
    vector<long long> list;

    while (!cin.eof()) {
        cin >> a >> b;
        list.push_back(abs(a - b));
    }

    for(int i = 0; i < list.size() - 1; i++) {
        cout << list[i] << "\n";
    }
}