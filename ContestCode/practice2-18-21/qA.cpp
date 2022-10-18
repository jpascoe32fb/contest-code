#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int width, partition,temp;
    vector <int> tempV;
    set <int> partitionV;

    cin >> width;
    cin >> partition;

    for(int i=0;i<partition;i++) {
        cin >> temp;
        tempV.push_back(temp);
        partitionV.insert(temp);
    }

    partitionV.insert(width);//gets width part

    for(int i=0;i<tempV.size();i++) {//gets width - partitions spots
        partitionV.insert(width-tempV[i]);
    }

    for(int i=0;i<tempV.size();i++) {//gets partition spots - e/other
        for(int j=tempV.size();j>i;j--) {
            partitionV.insert(abs(tempV[j]-tempV[i]));

        }
    }

    for(auto i: partitionV) {//prints
        if(i<=width) {
        cout << i << " ";
        }
    }

    return 0;
}