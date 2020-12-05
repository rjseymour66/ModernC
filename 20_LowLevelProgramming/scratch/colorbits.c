#include <stdio.h>

#define BLUE    1
#define GREEN   2
#define RED     4
#define BLACK   8

int main(void)
{
    int i, j;

    i = 0x00f3;     // 0000 0000 1111 0011
    
    /* Setting bits */

    printf("\nSetting the bits\n");

    printf("i: %d\n", i);
    printf("i: %d\n", i |= RED | BLACK);

    /* Clearing bits */

    i = 0x00ff;     // 0000 0000 1111 1111

    printf("\nClearing the bits\n");

    printf("i: %d\n", i);
    printf("i: %d\n", i &= ~ (BLACK | RED | GREEN | BLUE));

    /* Testing bits */

    i = 0x00f8;     // 0000 0000 1111 0011

    printf("\nTesting the bits\n");

    if (i & BLUE)
        printf("bit %d is set.\n", BLUE);
    else 
        printf("bit %d is not set.\n", BLUE);

    if (i & GREEN)
        printf("bit %d is set.\n", GREEN);
    else 
        printf("bit %d is not set.\n", GREEN);

    if (i & RED)
        printf("bit %d is set.\n", RED);
    else 
        printf("bit %d is not set.\n", RED);

    if (i & BLACK)
        printf("bit %d is set.\n", BLACK);
    else 
        printf("bit %d is not set.\n", BLACK);

    return 0;
}

// i |= BLUE;
// i &= ~BLUE;
// if (i & BLUE);