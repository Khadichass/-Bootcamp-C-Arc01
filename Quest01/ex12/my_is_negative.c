#include <stdio.h>

int my_is_negative(int param_1)
{
    if (param_1 >= 0) 
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
    int num = -1;
    printf("-> %d\n", my_is_negative(num));

    num = 1;
    printf("-> %d\n", my_is_negative(num));

    num = 0;
    printf("-> %d\n", my_is_negative(num));

    return 0;
}
