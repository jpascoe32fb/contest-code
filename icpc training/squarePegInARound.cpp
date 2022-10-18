#include <stdio.h>
#include <limits.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))
int main() {
    /*int x = 5; int y = 8;
    int z = MAX(x++, y++);

    printf("%d %d %d", x, y, z);*/

    unsigned int i = UINT_MAX;
    i++;
    printf("%u\n%u\n", i++, ++i);
}