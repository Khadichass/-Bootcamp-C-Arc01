#include <stdio.h>
void detonation_in(int second_left)
{
    printf("detonation in... %d seconds.\n", second_left );
}

int main()
{
    int timer = 10;

    while (timer >= 1) {
        detonation_in(timer);
        timer--;
    }
    return 0;
}