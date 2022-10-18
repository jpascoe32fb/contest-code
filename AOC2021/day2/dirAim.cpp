#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    int depth = 0, dist = 0, aim = 0;
    ifstream fp ("input.txt");

    string dir;
    int temp = 0;
    while(fp >> dir) {
        if(dir == "forward") {
            fp >> temp;
            dist += temp;
            depth += (aim*temp);
        } else if(dir == "down") {
            fp >> temp;
            aim += temp;
        } else if(dir == "up") {
            fp >> temp;
            aim -= temp;
        } 
    }
    cout << depth*dist << "\n";
    fp.close();
}