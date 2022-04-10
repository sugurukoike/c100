#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input < 0)
    {
        input *= -1;
    }

    printf("absolute value is %d\n", input);

    return 0;
}
