#include <stdio.h>

int my_add(int param_1, int param_2) {
    return param_1 + param_2;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    int result = my_add(num1, num2);

    printf("The sum of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
