#include <stdio.h>
#include <stdlib.h>

struct node *add_to_list(struct node *list, int n);

struct node *read_numbers(void);

struct node *search_list(struct node *list, int n);

struct node *delete_from_list(struct node *list, int n);

struct node {
    int value;
    struct node *next;
};

int main(void)
{
    struct node *first = NULL;

    struct node *new_node;
    new_node = malloc(sizeof(struct node));

    new_node->value = 10;
    new_node->next = first;
    first = new_node;





    printf("new_node:\t%p\n", new_node);
    printf("new_node:\t%d\n", new_node->value);
    printf("new_node:\t%p\n", new_node->next);
    printf("first:\t\t%p\n", first);

    printf("Enter a value: ");
    scanf("%d", &new_node->value);
    printf("new_node:\t%d\n", new_node->value);
    printf("\n\n");

    first = add_to_list(first, 10);
    first = add_to_list(first, 20);


    return 0;
}

struct node *add_to_list(struct node *list, int n) {
    struct node *new_node;

    new_node = malloc(sizeof(struct node));
    if (new_node == NULL) {
        printf("Error: malloc failed in add_to_list\n");
        exit(EXIT_FAILURE);
    }
    new_node->value = n;
    new_node->next = list;
    return new_node;
}

struct node *read_numbers(void) {
    struct node *first = NULL;
    int n;

    printf("Enter a series of integers (0 to terminate): ");
    for (;;) {
        scanf("%d", &n);
        if (n == 0)
            return first;
        first = add_to_list(first, n);
    }
}

struct node *search_list(struct node *list, int n) {
    while (list != NULL && list->value != n)
        list = list->next;
    return list;
}

struct node *delete_from_list(struct node *list, int n) {
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
         cur != NULL && cur->value != n;
         prev = cur, cur = cur->next)
        ;

    if (cur == NULL)
        return list;
    if (prev == NULL)
        list = list->next;
    else 
        prev->next = cur->next;
    free(curr);
    return list;    
}