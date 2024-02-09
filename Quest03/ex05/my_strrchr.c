#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* my_strrchr(char* param_1, char param_2)
{
    for (int i = strlen(param_1) -1; i > 0; i--) {
        if (param_1[i] == param_2)
        {
            return &param_1[i];
        }
    }
    return 0;
}

int main() {
    char str[] = "Hello, World!";
    char target = 'o';

    char* result = my_strrchr(str, target);

    if (result != NULL) {
        printf("'%c' found at position: %ld\n", target, result - str);
    } else {
        printf("'%c' not found in the string\n", target);
    }

    return 0;
}