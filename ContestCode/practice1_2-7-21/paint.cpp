#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main() {
    long total=0;
    long temp=0;
    int paintings[14][2000];
    cin >> temp;
   // paintings.push_back(temp);

    for(int i=0;i<paintings[0];i++) {
      /*  int row,col;
        cin >> row >> col;
        temp = row*col -1;
        temp=pow(6,temp);
        total = 18*temp;
        cout << total << "\n";*/
        cin >> temp;
        //paintings.push_back(temp);
        cin >> temp;
       // paintings.push_back(temp);
    }
    for(int i=1;i<paintings.size();i++) {
        int row,col;
       // row=paintings[i];
        i++;
        col=paintings[i];

        temp = row*col;
        temp=pow(6,temp-1);
        total = 18*temp;
        cout <<  total % (long)(pow(10,9) + 7)  << "\n";
    }
}