#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n);

int main(void)
{
    return 0;
}

void *my_malloc(size_t n) {

    void *result;

    
    if ((result = malloc(n)) == NULL) {
        printf("Error: the pointer returned NULL");
        exit(EXIT_FAILURE);
    } 

    return result;
}