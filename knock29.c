#include <stdio.h>

int main()
{
    int input = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("input number: ");
        scanf("%d", &input);

        sum += input;
    }

    printf("sum = %d\n", sum);

    return 0;
}
