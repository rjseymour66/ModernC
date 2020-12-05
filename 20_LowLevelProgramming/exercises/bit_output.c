#include <stdio.h>

int main(void) 
{
    unsigned short i, j, k;

    i = 8;  // 0000 0000 0000 1000
    j = 9;  // 0000 0000 0000 1001

    printf("%d\n", i >> 1 + j >> 1);

    i = 1;  // 0000 0000 0000 0001
            // 0000 0000 0000 0000  

    printf("%d\n", i & ~i);

    i = 2;  // 0010
    j = 1;  // 0001
    k = 0;  // 0000

    printf("%d\n", ~i & j ^ k);

    i = 7;  // 0111
    j = 8;  // 0110
    k = 9;  // 1001

    printf("%d\n", i ^ j & k);

    return 0;
}