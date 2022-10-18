#include <iostream>
#include <vector>

using namespace std;

/*void solve(vector<int> input, long index, long &min) {
    input.erase(input.begin()+index, input.begin()+index+2);
    vector<long> poss;
    for(long i = 0; i < input.size()-1; i++) {
        if((input[i]+input[i+1])%2 == 0) {
            poss.push_back(i);
        }
    }
    for(long x : poss) solve(input, poss[x], min);
    if(input.size() < min) min = input.size();
    return;
}*/

int main() {
    long n;
    cin >> n;
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

    bool cont = true;
    long counter = 0;
    while(cont) {
        for(long i = 0; i < input.size()-1; i++) {
            if((input[i]+input[i+1])%2 == 0) {
                input.erase(input.begin()+i,input.begin()+i+2);
                cont = true;
                break;
            } else {
                cont = false;
            }
        }
        //for(int x : input) {
            //cout << x << " ";
        //}
        //cout << "\n";
        if((counter > n+1) || input.size() == 0) cont = false;
        counter++;
    }
    cout << input.size() << endl;
}