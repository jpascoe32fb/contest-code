#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

bool checkWin(vector<int> boards) {
    if(boards[0]+boards[1]+boards[2]+boards[3]+boards[4] == -5) { 
        cout << "Win on row 1" << "\n";
        return true;
    }
    if(boards[5]+boards[6]+boards[7]+boards[8]+boards[9] == -5) {
        cout << "Win on row 2" << "\n";
        return true;
    }
    if(boards[10]+boards[11]+boards[12]+boards[13]+boards[14] == -5) {
        cout << "Win on row 3" << "\n";   
        return true;
    }
    if(boards[15]+boards[16]+boards[17]+boards[18]+boards[19] == -5) {
        cout << "Win on row 4" << "\n";
        return true;
    }
    if(boards[20]+boards[21]+boards[22]+boards[23]+boards[24] == -5) {
        cout << "Win on row 5" << "\n";
        return true;
    }

    if((boards[0]+boards[5]+boards[10]+boards[15]+boards[20]) == -5) {
        cout << "Win on col 1" << "\n";
        return true;
        }
    if((boards[1]+boards[6]+boards[11]+boards[16]+boards[21]) == -5) {
        cout << "Win on col 2" << "\n";
        return true;
        }
    if((boards[2]+boards[7]+boards[12]+boards[17]+boards[22]) == -5) {
        cout << "Win on col 3" << "\n";
        return true;
        }
    if((boards[3]+boards[8]+boards[13]+boards[18]+boards[23]) == -5) {
        cout << "Win on col 4" << "\n";
        return true;
        }
    if((boards[4]+boards[9]+boards[14]+boards[19]+boards[24]) == -5) {
        cout << "Win on col 5" << "\n";
        return true;
        }

    return false;
}

int main() {
    vector<int> inputs;
    int sum = 0;
    ifstream fp ("input.txt");
    
    for(int i = 0; i < 100; i++) {
        int temp = 0; char t;
        fp >> temp;
        if(i != 99) fp >> t;
        inputs.push_back(temp);
        //cout << temp << " ";
    }

    vector<vector<int>> boards;
    for(int i = 0; i < 100; i++) {
        boards.push_back({i});
        for(int j = 0; j < 25; j++) {
            int temp = 0;
            fp >> temp;
            boards[i].push_back(temp);
        }
    }

    bool win = false;
    int bsize = 100;
    int index = 0;
    while (!win) {
        for(int i = 0; i < bsize; i++) {
            //cout << "i = " << i << " board size = " << bsize << "\n";
            auto it = find(boards[i].begin(), boards[i].end(), inputs[index]);
            if( it != boards[i].end()) {
                *it = -1;
                if((index > 5) && (checkWin(boards[i]))) {

                    if(bsize == 1) {
                        cout << "END: \n";
                        for(int x = 0; x < 25; x++) {
                            if(boards[0][x] != -1) {
                                sum+=boards[0][x];
                            }
                        }
                        cout << sum*inputs[index] << "\n";
                        win = true;
                        break; 

                    } else {
                       // cout << bsize << " i - " << i << "\n";
                        boards.erase(boards.begin()+i);
                        i--; 
                        bsize--;
                        //cout << boards.size() << "\n";
                        continue;
                    }

                }
            }
        }
        index++;
    }
    cout << "DONE\n";
    fp.close();
}//100 test inputs 100 boards