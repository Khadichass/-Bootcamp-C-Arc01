#include <stdio.h>

void my_string_formatting(char* param_1, char* param_2, int param_3)
{
    printf("Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);
}

int main() {
    char name[] = "John";
    char surname[] = "Doe";
    int age = 30;
    
    my_string_formatting(name, surname, age);
    
    return 0;
}
