#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;

    cin >> input;
    bool done = false;
    while(!done) {
        int sum = 0;
        for(int index = 0; index < input.size(); index++) {
            const char tempc = input[index];
            sum +=  atoi(&tempc);
        }
        long n = stol(input, nullptr, 10);
        if(n % sum == 0) {
            done = true;
            cout << input << endl;
        } else {
            long temp = stol(input, nullptr, 10);
            temp++;
            input = to_string(temp);
        }
    }
        return 0;
}
