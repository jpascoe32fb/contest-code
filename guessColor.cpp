#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

void print_Occurances(vector<string> col,vector<int> ind) {
    for(int i=0;i<50;i++) {
        int index = rand() % 9;
        ind[index]++;
     }
    for(int i=0;i<10;i++) {
      cout <<"Color: "<<col[i]<<" Occurances: "<<ind[i]<<"\n";
     }
}

void print_color(vector<string> col) {
    int index = rand() % 9;
    cout <<"Color: "<< col[index]<<"\n";
}

int main(){
    srand(time(NULL));
    vector<int> number;
    number.resize(10);

    vector<string> color;
    color.push_back("red");
    color.push_back("orange");
    color.push_back("yellow");
    color.push_back("blue");
    color.push_back("green");
    color.push_back("purple");
    color.push_back("pink");
    color.push_back("white");
    color.push_back("brown");
    color.push_back("black");

    //print_Occurances(color,number);
    print_color(color);
    
    return 0;
}