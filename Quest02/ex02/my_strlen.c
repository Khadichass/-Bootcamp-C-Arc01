#include <stdio.h>
#include <string.h>

int my_strlen(char* param_1) {
    int length = 0;
    for (; param_1[length] != '\0'; length++) {
    }

    return length;
}

int main() {
    char my_string[] = "Hello, World!";

    printf("Length of the string \"%s\": %d\n", my_string, my_strlen(my_string));

    return 0;
}
