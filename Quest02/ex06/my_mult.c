#include <stdio.h>

int my_mult(int param_1, int param_2)
{
    return param_1 * param_2;
}

int main() {
    int result = my_mult(10, 5);
    printf("Result of multiplication: %d\n", result);
    return 0;
}
