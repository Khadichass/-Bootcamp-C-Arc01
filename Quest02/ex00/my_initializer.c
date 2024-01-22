#include <stdio.h>

void my_initializer(int* param_1) {
    *param_1 = 0;
}

int main() {
    int my_variable;
    my_initializer(&my_variable);

    printf("Initialized variable: %d\n", my_variable);

    return 0;
}
