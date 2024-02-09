#include <stdio.h>

char* my_strncpy(char* param_1, char* param_2, int param_3)
{
    for (int i = 0; param_2[i] != '\0'  && i < param_3; i++) {
        param_1[i] = param_2[i];
        param_2[i] = param_3;
    }

    return param_2;
}

int main() {
    char src[] = "Hello, World!";
    char dest[20]; 
    int n = 5; 
    my_strncpy(dest, src, n);

    printf("Copied string: %s\n", dest);

    return 0;
}