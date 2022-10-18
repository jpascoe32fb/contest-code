#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int x) {

    if(x == 2) return true;
    if (x % 2 == 0 && x != 2) return false;
    if(x % 3 == 0 && x!=3) return false;

        for (int i = 3; i <= sqrt(x); i += 2){
            if (x % i == 0) return false;
        }
    return true;
}

int main()  {
    int n = 0;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int tempNum = 0;
        cin >> tempNum;

        cout << tempNum << " has representation(s):\n";
        for(int x = 2; x <= tempNum/2; x++) {
            if(isPrime(x) && isPrime(tempNum-x)) {
                cout << x << "+" << tempNum-x << "\n";
            }
        }
    }
}