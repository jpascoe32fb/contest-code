#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    char pos = ' ';
    int nums[12] = {0};
    string gamma = "000000000000", epsilon = "000000000000";
    ifstream fp ("input.txt");

    while(fp >> pos) {
        nums[0] += stoi(&pos);
        for(int i = 1; i < 12; i++) {
            fp >> pos;
            nums[i] += stoi(&pos);
        }
    }

    int most[12] = {0};
    for(int i = 0; i < 12; i++) {
        if(nums[i] > 500) {
            most[i] = 1;
            gamma[i] = '1';
        } else {
            epsilon[i] = '1';
        }
    }
    
    int least[12] = {0};
    for(int i = 0; i < 12; i++) {
        if(most[i] == 1) least[i] = 0;
        else least[i] = 1;
    }
    int g = stoi(gamma, 0, 2), e = stoi(epsilon, 0, 2);
    cout << g*e << "\n";
}