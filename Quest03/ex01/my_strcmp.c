#include <stdio.h>

int my_strcmp(char* param_1, char* param_2) {
    int i = 0;
    while (param_1[i] != '\0' && param_2[i] != '\0') {
        if (param_1[i] != param_2[i]) {
            return param_1[i] - param_2[i];
        }
        i++;
    }
    // If one string is a prefix of the other, check their lengths
    return param_1[i] - param_2[i];
}

int main() {
    char str1[] = "hello";
    char str2[] = "world";
    
    int result = my_strcmp(str1, str2);
    
    if (result < 0) {
        printf("%s comes before %s\n", str1, str2);
    } else if (result > 0) {
        printf("%s comes after %s\n", str1, str2);
    } else {
        printf("%s is equal to %s\n", str1, str2);
    }
    
    return 0;
}
