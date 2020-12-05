#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void)
{
    int *array, i;

    array = create_array(10, 5);

    for (i = 0; i < 10; i++) {
        printf("a[%d]:\t%d\n", i, array[i]);
    }


    return 0;
}

int *create_array(int n, int initial_value) {

    int *a, *p;

    if ((a = malloc(n * sizeof(int))) == NULL) {
        printf("Error: array memory was not allocated.");
        return NULL;
    }

    for (p = a; p < a + n; p++)
        *p = initial_value;

    return a;    
    // return pointer to int array with n members
    // return NULL if array can't be allocated
}