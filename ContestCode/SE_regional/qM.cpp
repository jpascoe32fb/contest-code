#include <iostream>
#include <vector>
using namespace std;

int main() {
    float avg=0.0, input = 0.0,maxAvg,minAvg;
    vector<float> list;
    int judges=0, judged=0;

    cin >> judges >> judged;

    int temp=judged;
    while (temp!=0) {
        cin >> input;
        list.push_back(input);
        temp--;
    }

    for(int i=0;i<list.size();i++) {
        avg += list[i];
    }

    temp = judged;
    maxAvg = avg;
    while( judges > temp) {
        maxAvg += 3.0;
        temp++;
    }
    maxAvg /=(float) judges;

    temp=judged;
    minAvg=avg;
    while(judges > temp) {
        minAvg -= 3.0;
        temp++;
    }
    minAvg /= (float) judges;

    cout << (float) minAvg << " " << (float) maxAvg;


    return 0;
}