#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main() {
    vector<short> fish;
    fstream fp ("input.txt");

    int temp = 0;
    while(fp >> temp) {
        fish.push_back(temp);
        char comma;
        fp >> comma;
    }
    cout << fish.size() << "\n";

    for(int day = 0; day < 80; day++) {
        int list = fish.size();
        for(int x = 0; x < list; x++) {
            fish[x]--;
            if(fish[x] < 0) {
                fish[x] = 6;
                fish.push_back(8);
            }
        }
    }
    cout << fish.size() << "\n";
    fp.close();
}