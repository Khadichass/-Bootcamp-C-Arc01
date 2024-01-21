#include <stdio.h>

int my_isdigit(char param_1)
{
    if (param_1 >= '0' && param_1 <= '9')
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
    char ch1 = '5';
    char ch2 = 'a';

    printf("Is '%c' a digit? %s\n", ch1, my_isdigit(ch1) ? "Yes" : "No");
    printf("Is '%c' a digit? %s\n", ch2, my_isdigit(ch2) ? "Yes" : "No");

    return 0;
}
