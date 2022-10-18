#include <stdio.h>

int main() {
    int current = 0; int prev = 0;
    int count = 0;
    FILE* in = fopen("input.txt", "r");
    while(!feof(in)) {
        fscanf(in, "%d", &current);
        if(prev == 0) {
            prev = current;
            continue;
        }
        if(current > prev) count++;
        prev = current;
    }
    printf("%d is the count\n", count);
    fclose(in);
}