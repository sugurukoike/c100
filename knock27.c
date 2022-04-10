#include <stdio.h>

int main()
{
    int input = 0;
    int sum = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input <= 0)
    {
        printf("sum = %d\n", sum);
    }
    else
    {
        sum = (1 + input) * input / 2;
        printf("sum = %d\n", sum);
    }

    return 0;
}
