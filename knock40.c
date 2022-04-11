#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input % 2 == 0)
    {
        printf("%d is even.\n", input);
    }
    else
    {
        printf("%d is odd.\n", input);
    }

    return 0;
}
