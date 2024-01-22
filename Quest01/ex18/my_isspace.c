#include <stdio.h>

int my_isspace(char param_1)
{
    if (param_1 == ' ')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (my_isspace(character))
    {
        printf("The character is a space.\n");
    }
    else
    {
        printf("The character is not a space.\n");
    }

    return 0;
}
