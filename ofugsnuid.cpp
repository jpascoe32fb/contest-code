#include <iostream>
using namespace std;

struct list {
    int val;
    struct list *next = NULL;
};

struct list *nums;

void add_list(struct list *nums, int val) {
    if(nums->next != NULL) {
        add_list(nums->next, val);
        return;
    }
    struct list *node;
    node->val = val;
    node->next = NULL;

    nums->next = node;
    return;
}

void printReverse(struct list *node) {
    if(nums->next != NULL) {
        printReverse(node->next);
        return;
    }
    cout << node->val << "\n";
}

int main() {

    int cases;
    cin >> cases;

    for(int i = 0; i<cases; i++) {
        int num = 0;
        cin >> num;
        add_list(nums, num);
    }

    printReverse(nums);
}