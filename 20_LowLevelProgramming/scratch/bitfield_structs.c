#include <stdio.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;

/* Registers */

union {
    struct {
        WORD ax, bx, cx, dx;
    } word;
    struct {
        BYTE al, ah, bl, bh, cl, ch, dl, dh;
    } byte;
} regs;

struct file_date {          
    unsigned int day: 5;    
    unsigned int month: 4;
    unsigned int year: 7;
};

struct file_time {
    unsigned int seconds: 6;
    unsigned int minutes: 6;
    unsigned int hours: 5;
};

union int_date {
    unsigned short i;
    struct file_date fd;
};

void print_date(unsigned short n);

int main(void)
{

    struct file_date fd;

    fd.day = 28;
    fd.month = 12;
    fd.year = 8;

    short x = 31619;

    print_date(x);

    printf("\nRegisters\n");

    regs.byte.ah = 0x12;
    regs.byte.al = 0x34;
    printf("AX: %hx\n", regs.word.ax);

    printf("\nPointers\n");

    BYTE *p;

    p = (BYTE *) 0x1000; // p contains address 0x1000
    printf("p address: %p\n", p);


    return 0;
}

void print_date(unsigned short n) {
    union int_date u;

    u.i = n;
    printf("%d/%d/%d\n", u.fd.month, u.fd.day, u.fd.year + 1980);
}