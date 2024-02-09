#include <stdio.h>
#include <string.h>

char* reverse_string(char* param_1)
{
    for (int i = 0; i < strlen(param_1) / 2; i++) {
        char temp = param_1[i];
        param_1[i] = param_1[strlen(param_1) - i - 1];
        param_1[strlen(param_1) - i - 1] = temp;
    }

    return param_1;
}

int main() {
    char str[] = "hello";

    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", reverse_string(str));

    return 0;
}
