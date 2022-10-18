

#include <iostream>
#include <string>
using namespace std;


int main() {
    string password = " ";
    cin >> password;

    unsigned int wordLength = password.length();

    for(int index = 0; index < wordLength; index++) {
        int countL, countR, countB;
        if(password[index] == 'L') {
            int counter = 1;
            while((index+counter < wordLength) && (password[index + counter] == 'L')) {
                counter++;
            } 
            countL = counter;
            password.erase(index, countL);

            string bufferR = password.substr(index, wordLength);
            string bufferL = password.substr(0,index - countL);
            string bufferM = password.substr(index - countL, index);

            password = bufferL + bufferR + bufferM;
            if(index > 0) index--;
        }
        if(password[index] == 'R') {
            int counter = 1;
            while((index+counter < wordLength) && (password[index + counter] == 'R')) {
                counter++;
            } 
            countR = counter;
            password.erase(index, countR);

            string bufferR = password.substr(index, wordLength);
            string bufferL = password.substr(0,index - countL);
            string bufferM = password.substr(index - countL, index);

            password = bufferL + bufferR + bufferM;
            if(index > 0) index--;
        }
        if(password[index] == 'B') {
            int counter = 1;
            while((index+counter < wordLength) && (password[index + counter] == 'R')) {
                counter++;
            } 
            countB = counter;
            password.erase(index-countR, countR*2);
        }
    }
    
    cout << password;
}