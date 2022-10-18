
#include <iostream>
#include <string>
using namespace std;

void findAns(int a, int b, int c) {
    if(a == 1) cout << 1;
    if(b == 1) cout << 2;
    if(c == 1) cout << 3;
}

int main() {
    int A = 1;
    int B = 0, C = 0;

    string ops = " ";
    cin >> ops;

    int ops_length = ops.length();

    for(int index = 0; index < ops_length; index++) {
        char move = ops[index];
        if(move == 'A') {
            int temp = A;
            A = B;
            B = temp;
        }
        if(move == 'B') {
            int temp = B;
            B = C;
            C = temp;
        }
        if(move == 'C') {
            int temp = A;
            A = C;
            C = temp;
        }
    }
    findAns(A,B,C);
}