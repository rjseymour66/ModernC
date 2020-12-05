#include <stdio.h>

char toggle_8_bit(unsigned char i, int bit);

int main(void)
{
    // toggle bit 4 in variable i
    unsigned char i;

    i = 8;  // 0000 1000

    printf("%x\n", i);
    printf("%x\n", i ^= 0x0010);

    return 0;
}

char toggle_8_bit(unsigned char i, int bit) {
    return i |= 1 << bit;
}