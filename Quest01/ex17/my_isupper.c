#include <stdio.h>

int my_isupper(char param_1)
{
    if (param_1 >= 'A' && param_1 <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}

int main(void)
{
    char test_char1 = 'A';
    char test_char2 = 'b';

    printf("Is '%c' uppercase? %s\n", test_char1, my_isupper(test_char1) ? "Yes" : "No");
    printf("Is '%c' uppercase? %s\n", test_char2, my_isupper(test_char2) ? "Yes" : "No");

    return 0;
}
