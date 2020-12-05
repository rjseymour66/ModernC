#include <stdio.h>

int main(void)
{
    int i, j, k, x;

    i = 0x0000;
    j = 3;

    printf("i: %d\n", i);
    printf("j: %d\n", j);

    /* shifting */

    printf("\nshifting\n");

    x = 0x0010;

    printf("x << 2: %2d (should be 64)\n", x << 2);
    printf("x >> 1: %2d (should be 8)\n", x >> 1);


    /* setting a bit */

    printf("\nsetting a bit\n");

    printf("i mask: %d\n", i |= 0x0010);
    printf("i |= 1 << j: %x\n", i |= 1 << j);

    /* masking a bit */

    printf("\nmasking a bit\n");

    i = 0x00ff;

    printf("i: %d\n", i);
    printf("i: %d\n", i &= ~0x0010);

    printf("\ntesting a bit\n");

    i = 0x00f8; // 0000 0000 1111 1100
    j = 3;      // 0000 0000 0000 0010 

    if (i & 1 << j)
        printf("bit %d is set.\n", j);
    else 
        printf("bit %d is not set.\n", j);


    printf("\nBIT FIELDS\n");

    printf("You must clear the bit field before setting it.");

    i = 0x00ff;     // 0000 0000 1111 1111
                    // 0000 0000 1000 1111
                    // 0000 0000 1101 1111

    printf("i: %d\n", i);
    printf("i: %d\n", i & 0x0070 | 0x0050);


    return 0;
}