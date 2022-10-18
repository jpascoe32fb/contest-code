//Bad packing problem from the 2020 Southeast USA regional contest
//Same technique to find the answer from class but with vectors instead 
//arrays
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> sizes;
vector<bool> possible;
int numItems, capacity;

int main(void) {
    int tempSize,totalSize = 0;

    cin >> numItems >> capacity;

    for(int index = 0; index < numItems; index++) {
        cin >> tempSize;
        sizes.push_back(tempSize);
        totalSize += tempSize;
    }
    int best = totalSize;
    
    for(int index = 0; index <= 100000; index++) possible.push_back(0);
    possible[0] = 1;
    sort(sizes.begin(),sizes.end());

    for(int i=numItems-1; i>= 0; i--) {
        
        totalSize -= sizes[i];
        for(int size = capacity-sizes[i]+1; size<=capacity;size++) {
            if(size - totalSize >= 0 && possible[size - totalSize] ) {
               if(size < best) best = size;
               break;
            }
        }

        for(int size=capacity - sizes[i]; size>=0; size--) {
            if(possible[size]) possible[size+sizes[i]] = 1;
        }
    }

    cout << best << "\n";
}