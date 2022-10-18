//Musical chairs problem from 2019 icpc east central NA regional contest (reused in a practice contest)
//Uses circular list to store every professor and their call
//Each node in the list contains the professor's index and their call
//as well as a boolean called to keep track of who has been eliminated
//Could possibly separate those who've been eliminated from list to optimize
#include <iostream>
#include <stdlib.h>

using namespace std;

int nodes = 0;
int runCount = 1;
int runCall;
int runMod = 0;

struct list {
    int index;
    int call;
    bool called;

    struct list *next;
}*startnode;

struct list *runNode = startnode;

void create(int n) {
    int i, num, count = 1;
    struct list *preptr, *newnode;

    if(n >= 1) {
        startnode = (struct list *)malloc(sizeof(struct list));

        cin >> num;
        startnode->call = num;
        startnode->index = count;
        startnode->called = false;
        count++;

        startnode->next = NULL;
        preptr = startnode;
        for(i=2; i<=n; i++) {
            newnode = (struct list *)malloc(sizeof(struct list));

            cin >> num;
            newnode->call = num;
            newnode->index = count;
            newnode->called = false;
            count++;

            newnode->next = NULL;
            preptr->next = newnode;
            preptr = newnode;
        }
        preptr->next = startnode;
    }
}

void run() {
    
    while(runCount < nodes) {
        runCall = runNode->call;
        runMod = runCall % nodes;
        if(runMod == 0) {
            for(int index = 1; index < nodes; index++) {
                runNode = runNode->next;
            }
            while(runNode->called == true) {
                runNode = runNode->next;
            }
            runNode->called = true;
            while(runNode->called == true) {
                runNode = runNode->next;
            }

        } else if(runMod == 1) {
            runNode->called = true;
            while(runNode->called == true) {
                runNode = runNode->next;
            }

        }else {
            for(int index = 1; index < runMod; index++) {
                runNode = runNode->next;
            }
            while(runNode->called == true) {
                runNode = runNode->next;
            }
            runNode->called = true;
            while(runNode->called == true) {
                runNode = runNode->next;
            }
        }
        nodes--;
    }

}
/*
void print() {
    struct list *tmp;
    int i;

    tmp = startnode;
    printf("\nData entered in the list are :\n");

    do {
        printf("Node %d : %d : %d\n", tmp->index, tmp->call, (int*)tmp->called);

        tmp = tmp->next;
    }while(tmp != startnode);
}*/

int main() {
    startnode = NULL;

    cin >> nodes;

    create(nodes);
    runNode = startnode;
    run();

    runNode = startnode;
    while(runNode->called == true) {
        runNode = runNode->next;
    }
    cout << runNode->index;
    
    return 0;
}