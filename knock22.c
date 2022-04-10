#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input <= -10 || input >= 10)
    {
        printf("OK\n");
    }

    return 0;
}
