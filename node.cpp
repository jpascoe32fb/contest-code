#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    vector<string> answer;
    int x=7;
    s="Answer is [";
    s+=to_string(x);
    s+="]";
    answer.push_back(s);
    cout <<answer[0]<<"\n";
}