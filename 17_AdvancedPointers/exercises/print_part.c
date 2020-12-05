#include <stdio.h>
#include <string.h>

struct part {
    int number;
    char name[25];
    int on_hand;
};

void print_part(struct part *p);

int main(void)
{

    struct part *engine;

    engine->number = 100105;
    strcpy(engine->name, "Fast engine!");
    engine->on_hand = 4;

    print_part(engine);

    return 0;
}

void print_part(struct part *p) {
    printf("Part number:\t%d", p->number);
    printf("Part name:\t%s", p->name);
    printf("Quantity on hand:\t%d", p->on_hand);
}