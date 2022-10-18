#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
    srand(time(NULL));
    int number = rand() % 50 +1;
    int guess;
    int score;

    cout <<"\n"<<number<<"\n";
    cout <<"Guess the number - \n";
    
    cin >> guess;
    while (guess!=number) {
        if(guess>number) {
            cout<<"The secret number is smaller. \n";
        }
        if(guess<number) {
            cout<<"The secret number is bigger. \n";
        }
        cin >>guess;
        score++;
    }

    score++;
    cout<<"\nCorrect!  Took "<<score<<" tries\n";
    return 0;
}