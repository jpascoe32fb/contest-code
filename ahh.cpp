

#include <iostream>
#include <string>
using namespace std;

int main() {
    string jon, doc;

    cin >> jon >> doc;

    if(jon.length() >= doc.length()) {
        cout << "go";
    } else {
        cout << "no";
    }
}