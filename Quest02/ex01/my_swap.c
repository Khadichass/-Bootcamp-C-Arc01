#include <stdio.h>

void my_swap(int* param_1, int* param_2) {
    int temp = *param_1;
    *param_1 = *param_2;
    *param_2 = temp;
}

int main() {
    int a = 5;
    int b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);

    my_swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
