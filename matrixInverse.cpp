#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 0;

    for(int caseId = 1; cin >> a; caseId++) {
        string temp;
        int b, c, d;
        cin >> b >> c >> d;
        cout << "Case " << caseId << ":\n";
        cout << d << " " << -b << "\n";
        cout << -c << " " << a << "\n";
    }
}