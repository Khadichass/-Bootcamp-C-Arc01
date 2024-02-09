#include <stdio.h>

int my_sub(int param_1, int param_2)
{
    return param_1 - param_2;
}

int main() {
    int result = my_sub(10, 5);
    printf("Result of subtraction: %d\n", result);
    return 0;
}
