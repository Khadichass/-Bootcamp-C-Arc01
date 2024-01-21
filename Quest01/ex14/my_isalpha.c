#include <stdio.h>

int my_isalpha(char param_1)
{
    if ((param_1 >= 'a' && param_1 <= 'z') || (param_1 >= 'A' && param_1 <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    char ch1 = 'a';
    char ch2 = '5';

    printf("Is '%c' alphabetic? %s\n", ch1, my_isalpha(ch1) ? "Yes" : "No");
    printf("Is '%c' alphabetic? %s\n", ch2, my_isalpha(ch2) ? "Yes" : "No");

    return 0;
}
