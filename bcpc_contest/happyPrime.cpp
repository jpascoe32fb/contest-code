#include<bits/stdc++.h>

using namespace std;

int numSquare(int n) {
    int sqrSum = 0;
    while(n) {
        sqrSum += (n%10) * (n%10);
        n /= 10;
    }
    return sqrSum;
}

bool isPrime(int n) {
    if(n == 1) return false;
    for (int div = 2; div < n; div++) {
        if(n%div == 0) return false;
    }
    return true;
}

bool isHappyPrime(int n) {
    int slow, fast;
    slow = fast = n;
    if(!isPrime(n)) return false;
    do {
        slow = numSquare(slow);
        fast = numSquare(numSquare(fast));
    } while (slow != fast);

    return(slow == 1);
}

int main() {
    int amnt = 0;
    cin >> amnt;

    for (int num = 0; num < amnt; num++) {
        int input = 0; int temp = 0;
        cin >> temp >> input;
        cout << temp << " " << input << " ";
        if(isHappyPrime(input)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}