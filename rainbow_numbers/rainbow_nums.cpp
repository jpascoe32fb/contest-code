//Problem from the 2020 Southeast Regional contest
//A sort of brute force method where it goes through every number 
//between the upper and lower limit to find rainbow numbers and
//keeps track of how many found
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool check(int num) {
    string str = to_string(num);
    for(int index = 0; index < str.size(); index++){
        if(str[index] == str[index+1]) return false;
    }
    return true;
}

int main() {
    int min, max;

    cin >> min >> max;

    int rains = 0;
    int diff = max-min;

    while (min < max) {
        if(check(min)) rains++;
        min++;
    }

    rains++;

    cout << rains % 998244353;
}