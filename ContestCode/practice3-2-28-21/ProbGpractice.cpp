#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int index,count,tempCount,size,temp,tempindex=1;
    map<int,int> list;
    map<int,int>:: iterator it;

    cin >> size;
    while(size>0) {
        cin >> temp;
        
        list.insert(pair<int,int>(tempindex,temp));
       tempindex++;
        size--;
    }

    count = list.begin()->first;
    
    while (list.size() > 1) {
        while(count>list.size()) {count -= list.size();}

        //it = list.find(count);
        //cout << it->first << "\n";
        tempCount = count;
        
        if(count==list.size()) {
            count = list.begin()->second;

        }else {
            it = list.upper_bound(count);
            count = it->second;
        } 

        it = list.find(tempCount);
        list.erase(it);
    }
    it = list.begin();
    cout << it->first;

    return 0;
}