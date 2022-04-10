#include <stdio.h>

int main()
{
    int input = 0;
    int factorial = 1;

    printf("input number: ");
    scanf("%d", &input);

    if (input <= 0)
    {
        printf("factorial = %d\n", factorial);
    }
    else
    {
        for (int i = 1; i <= input; i++)
        {
            factorial *= i;
        }

        printf("factorial = %d\n", factorial);
    }

    return 0;
}
