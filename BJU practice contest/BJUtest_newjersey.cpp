#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, p; cin >> t >> p;
    
    vector<int> teams;
    int counter = 0;
    int temp = 0;
    cin >> temp;
    teams.push_back(temp);
   /* for(int x = 0; x < p; x++) {
        int temp = 0;
        cin >> temp;
        teams.push_back(temp);
    }*/
    for(int ts = 1; ts <= t*p; ts++) {
        int temp = 0;
        cin >> temp;
        auto it = find(teams.begin(), teams.end(), temp);
        if(it != teams.end()) {
            counter++;
        }
        teams.push_back(temp);
    }
    
    cout << counter;
}