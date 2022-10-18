
#include <iostream>
using namespace std;

int main() {
    int input, max, min, mid;

    cin >> input;
    max = input;
    min = input;
    mid = input;

    for(int num = 0; num < 2; num++) {
        cin >> input;
        if(input < min) {
            mid = min;
            min = input;
            continue;
        } 
        if(input > max){
            mid = max;
            max = input;
            continue;
        } 
        mid = input;
    }
    string order = " ";
    cin >> order;
    int order_length = order.length();

    for(int index = 0; index < order_length; index++) {
        if(order[index] == 'A') {
            cout << min << " ";
        } else if(order[index] == 'B') {
            cout << mid << " ";
        } else {
            cout << max << " ";
        }
    }

}