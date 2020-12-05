#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "stack.h"

int main(void)
{

struct x
{
    int a;
};

    (&x)->a;
    x.a;

    *(&x).a


}

struct node {
    int value;
    struct node *next;
};

struct node *top = NULL;


void make_empty(void) {
    struct node *temp;

    while (top != NULL) {
        temp = top;
        top = top->next;
        free(temp);
    }
}

int is_empty(void) {
    return top == NULL;
}

// remove this, instead having push return either true (if memory is available) or false
int is_full (void) {
    return top == STACK_SIZE;
}

void push(int i) {

    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL)
        return false;

    new_node->value = i;
    new_node->next = top;
    top = new_node;
}

int pop(void) {

    struct node *temp;
    int i;

    if (is_empty()) {
        printf("*** Stack underflow: program terminated ***");
        exit(EXIT_FAILURE);
    }

    i = top->value;
    temp = top->next;
    top = temp->next;
    free(top);
    
    return i;
}