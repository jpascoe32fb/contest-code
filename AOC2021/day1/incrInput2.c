#include <stdio.h>

int main() {
    int head = 0, bod = 0, tail = 0; int third = 0;
    int count = 0;

    FILE* in = fopen("input.txt", "r");

    int prevSum = 0;

    fscanf(in,"%d%d%d", &head,&bod,&tail);
    prevSum = head+bod+tail;
    int switcher = 3;

    while(!feof(in)) {
        if(switcher == 0) {
            fscanf(in, "%d", &head);
            int sum = head+tail+third;
            if(sum > prevSum) count++;
            prevSum = sum;
            switcher++;
            continue;
        } if(switcher == 1) {
            fscanf(in, "%d", &bod);
            int sum = head+bod+third;
            if(sum > prevSum) count++;
            prevSum = sum;
            switcher++;
            continue;
        } if(switcher == 2) {
            fscanf(in, "%d", &tail);
            int sum = head+bod+tail;
            if(sum > prevSum) count++;
            prevSum = sum;
            switcher++;
            continue;
        } if(switcher == 3) {
            fscanf(in, "%d", &third);
            int sum = third+tail+bod;
            if(sum > prevSum) count++;
            prevSum = sum;
            switcher++;
            continue;
        }
        if(switcher == 4) switcher = 0;
    }

    printf("%d is the count\n", count);
    fclose(in);
}