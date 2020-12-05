#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str);

int main(void)
{

    char *string;

    string = duplicate("Ryan Seymour");

    printf("duplicate: %s\n", string);

    return 0;
}

char *duplicate(char *str) {
    char *result;

    result = (char *)malloc(strlen(str) + 1);
    if (result == NULL) {
        printf("Error: copy failed.");
        exit(EXIT_FAILURE);
    }
    strcpy(result, str);

    return result;
}