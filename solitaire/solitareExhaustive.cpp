#include <iostream>
#include <vector>

using namespace std;

void solve(vector<bool> input, long index, long &min) {
    input.erase(input.begin()+index, input.begin()+index+2);
    vector<long> poss;
    for(long i = 0; i < input.size()-1; i++) {
        if((input[i]+input[i+1])%2 == 0) {
            poss.push_back(i);
        }
    }
    for(long x : poss) 
        if(min > 0) solve(input, poss[x], min);
    if(input.size() < min) min = input.size();
    return;
}

long mini = 0;

int main() {
    long n;
    cin >> n;
    mini = n;
    vector<bool> input;
    for(int i = 0; i < n; i++) {
        int temp = 0;
        cin >> temp;
        if(temp%2 == 0) {
            input.push_back(1);
        } else {
            input.push_back(0);
        }
    }

    vector<long> poss;
    for(long i = 0; i < input.size()-1; i++) {
        if((input[i]+input[i+1])%2 == 0) {
            poss.push_back(i);
        } 
    }
    for(int x : poss) {
        if(mini > 0) solve(input, poss[x], mini);
    }     
    cout << mini << endl;
}