#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int cases = 0;
    cin >> cases;
    for(int i = 0; i < cases; i++) {
        int A[4] = {0}; int B[4] = {0};
        for(int j = 0; j < 2; j++) {
            for(int k = 0; k < 4; k++) {
                int temp = 0;
                cin >> temp;
                if(j==0) A[k] = temp;
                else B[k] = temp;
            }
        }

        /*sort(A, A+4); sort(B, B+4);
        int Aloss = 0; int Bloss = 0;
        for(int a = 0; a < 4; a++) {
            for(int b = 0; b < 4; b++) {
                if(A[a] > B[b]) Bloss++;
                else Aloss++;
            }
        }*/

       /* cout << Aloss << " " << Bloss << "\n";
        int diff = abs(Aloss-Bloss);
        if(diff > 0 && diff < 16) cout << "yes\n";
        else cout << "no\n";*/

        sort(A, A+4); sort(B, B+4);
        int counter = 0;
        for(int i = 0; i < 4; i++) {
            if((abs(A[i] - B[i]) > 1) && (abs(A[i] - B[i]) < 9)) {
                counter++;
            }
        }
        if(counter > 1) {
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}