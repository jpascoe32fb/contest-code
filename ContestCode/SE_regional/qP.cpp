#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main() {
    int emailers,emails,toteUnread=0,emailer;
    vector<int> list;
    vector<int> emailList;
    cin >> emailers >> emails;


    for(int i=0; i < emailers; i++) {
        list.push_back(0);
    }

    for(int i=0; i<emails;i++) {
        int temp = 0;
        cin >> temp;
        emailList.push_back(temp);
    }

    cout << "\n";

    for(int email = 0; email < emails; email++) {
        //gets who is emailing
        emailer = emailList[email];

        //emailer reads his emails
        toteUnread -= list[emailer-1];
        list[emailer-1] = 0;

        //emailer sends his emails
        toteUnread += emailers - 1;
        for(int index=0; index < list.size();index++) {
            list[index]++;
        }

        list[emailer-1] = 0;
        
        cout << toteUnread <<"\n";
    }


    return 0;
}