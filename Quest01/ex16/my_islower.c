#include <stdio.h>

int my_islower(char param_1)
{
    if (param_1 >= 'a' && param_1 <= 'z')
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
    char ch2 = 'A';

    printf("Is '%c' a lowercase letter? %s\n", ch1, my_islower(ch1) ? "Yes" : "No");
    printf("Is '%c' a lowercase letter? %s\n", ch2, my_islower(ch2) ? "Yes" : "No");

    return 0;
}
