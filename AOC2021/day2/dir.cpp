#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int depth = 0, dist = 0;
    ifstream fp ("input.txt");

    string dir;
    int temp;
    while(fp >> dir) {
        if(dir == "forward") {
            fp >> temp;
            dist += temp;
        } else if(dir == "down") {
            fp >> temp;
            depth += temp;
        } else if(dir == "up") {
            fp >> temp;
            depth -= temp;
        } 
    }
    cout << depth*dist << "\n";
    fp.close();
}