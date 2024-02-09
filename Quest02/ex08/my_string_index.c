#include <stdio.h>

int my_string_index(char* param_1, char param_2)
{
    for (int i = 0; param_1[i] != '\0'; i++) {
        if (param_1[i] == param_2) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[] = "example";
    char target = 'm';
    
    int index = my_string_index(str, target);
    
    if (index != -1) {
        printf("'%c' found at index %d in the string '%s'\n", target, index, str);
    } else {
        printf("'%c' not found in the string '%s'\n", target, str);
    }
    
    return 0;
}
