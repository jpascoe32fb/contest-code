#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string pos;
    string min, max;
    vector<string> numsMax, numsMin;
    fstream fp ("input.txt");

    while (fp >> pos) {
        numsMax.push_back(pos);
        numsMin.push_back(pos);
    }

    int index = 0;
    while(index < 12) {
        if(numsMax.size() > 1) {
            double count = 0;
            for(int i = 0; i < numsMax.size(); i++) {
                string temp = numsMax[i];
                if(temp[index] == '1') count++;
            }
            if(count >= (double) (numsMax.size()/2.0)) {
                for(int i = 0; i < numsMax.size(); i++) {
                    string temp = numsMax[i];
                    if(temp[index] == '0') {
                        numsMax.erase(numsMax.begin()+i);
                        i--;
                    }
                }
            } else {
                for(int i = 0; i < numsMax.size(); i++) {
                    string temp = numsMax[i];
                    if(temp[index] == '1') {
                        numsMax.erase(numsMax.begin()+i);
                        i--;
                    }
                }
            }
        }
        if(numsMin.size() > 1) {
            double count = 0;
            for(int i = 0; i < numsMin.size(); i++) {
                string temp = numsMin[i];
                if(temp[index] == '1') count++;
            }
            if(count >= (double) (numsMin.size()/2.0)) {
                for(int i = 0; i < numsMin.size(); i++) {
                    string temp = numsMin[i];
                    if(temp[index] == '1') {
                        numsMin.erase(numsMin.begin()+i);
                        i--;
                    }
                }
            } else {
                for(int i = 0; i < numsMin.size(); i++) {
                    string temp = numsMin[i];
                    if(temp[index] == '0') {
                        numsMin.erase(numsMin.begin()+i);
                        i--;
                    }
                }
            }
        }
        index++;
    }
    
    long c = stoi(numsMax[0],0,2), o = stoi(numsMin[0],0,2);
    cout << c*o << "\n";
}