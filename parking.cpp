/*this program takes in a number of test cases t, a number of stores to visit n,
 and each position of the stores on Long Street x. 
 Basically (max - min)*2 of a given set */

using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int test_cases = 0;
    cin >> test_cases;
    vector<int> answers;

    for(int x = 0; x < test_cases; x++) {
        int num_stores = 0;
        cin >> num_stores;

        vector<int> stores;
         int stores_size = 0;
        
        for(int y = 0; y < num_stores; y++) {
            int temp = 0;
            cin >> temp;

            stores.push_back(temp);
            stores_size++;
        }
        sort(stores.begin(), stores.end());
        int min = stores[0];
        int max = stores[stores_size-1];
        int ans = (max-min)*2;
        answers.push_back(ans);
    }
    vector<int>::iterator it;
    for(it = answers.begin(); it != answers.end(); it++) {
        cout << *it << "\n";
    }

}