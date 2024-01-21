#include <stdio.h>

int my_abs(int param_1)
{
    if (param_1 < 0) 
    {
        return param_1 * -1;
    }
    else
    {
        return param_1;
    }
}

int main(void)
{
    int num = -5;
    int result = my_abs(num);

    printf("The absolute value of %d is %d\n", num, result);

    num = 10;
    result = my_abs(num);

    printf("The absolute value of %d is %d\n", num, result);

    num = 0;
    result = my_abs(num);

    printf("The absolute value of %d is %d\n", num, result);

    return 0;
}
