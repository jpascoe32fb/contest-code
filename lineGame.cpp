#include <iostream>
#include <cstdlib>
using namespace std;
int size=100; //size of game_table

string player(int turn) {
    if (turn%2 +1 == 2) return "Gabrielle";//Player 1
    if (turn%2 +1 == 1) return "John";//Player 2

    return "::Not in index::";
}

int main() {
    int count;
    int turn;
    int input;
    int table[size]={0};

    cout << "\nThis game is basically 1D 2player snake.\n";
    cout <<"Player input will run on a table from 0 to "<<size<<" for an amount equal to the input + turns that have passed.\n";
    cout <<"If the input/run goes above "<< size <<", they loop back to 0.\n";
    cout <<player(turn+1)<<" input a number that will run for length "<<count<<": ";
    cin >>input;

    if(input>size) input=0;
    while(table[input]==0) {//runs game till collision
        if (input>size) input=0;
        table[input]=1;
        count=turn;

        while(count>0) {//inputs the run into table
            if(input+count > size) input=0;
            if(table[input+count]!=0) {
                cout <<"Run had collision at "<<input+count<<"\n";
                cout <<player(turn)<<" won!";
                return 0;
            }
            if(table[input+count]==0) {
                table[input+count]=1;
            }
            count--;
        }

        cout <<player(turn)<< " input the next run of length "<<turn+1<<": ";
        cin >>input;
        turn++;
        if(input>size) input = 0;
    }
    cout << "Run had a collision at "<<input+count<<"\n";
    cout << player(turn) <<" won!";
    return 0;
}