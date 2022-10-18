#include <iostream>
#include <fstream>

using namespace std;

int main() {
    long ans = 0;
    short map[1000][1000] = {0};

    fstream fp ("input.txt");
    short x1 = 0;

    while(fp >> x1) {
        char t;
        fp >> t;
        short y1, x2, y2;
        fp >> y1 >> t;
        fp >> t >> x2 >> t >> y2;

        for(int x = x1; x < x2; x++) {
            map[x][y1] += 1;
            if(map[x][y1] == 2) ans++;
            continue;
        }
        for(int x = x2; x < x1; x++) {
            map[x][y2] += 1;
            if(map[x][y2] == 2) ans++;
            continue;
        }
        for(int y = y1; y < y2; y++) {
            map[x1][y] += 1;
            if(map[x1][y] == 2) ans++;
            continue;
        }
        for(int y = y2; y < y1; y++) {
            map[x2][y] += 1;
            if(map[x2][y] == 2) ans++;
            continue;
        }
    }
    for(int y = 0; y < 100; y++) {
        for(int x = 0; x < 100; x++) {
            //cout << map[x][y] << " ";
        }
        //cout << "\n";
    }
    cout << ans << endl;
}