//Problem P on the 2020 Southeast USA regional contest
//This was the last problem I worked on for the contest and wasn't able to get it
//The problem is much simpler than I first thought, is a simple
//array where the index is the emailer and the value of the array[index] 
//is the number of their unread messages
#include <iostream>
using namespace std;


int main() {
    int numPeople, numMessages, unread = 0;

    cin >> numPeople >> numMessages;

    int people[numPeople];
    for(int index=0;index < numPeople; index++) {
        people[index] = 0;
    }

    int sender = 0;
    for(int msg = 0; msg < numMessages; msg++) {
        cin >> sender;
        unread -= people[sender-1];
        people[sender-1] = 0;
        unread += numPeople-1;

        for(int index = 0; index < numPeople; index++) {
            if(index == (sender-1)) {
                continue;
            } else {
                people[index]++;
            }
        }
        cout << unread << "\n";
    }

}