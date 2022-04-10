#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    for (int i = 1; i <= 9; i++)
    {
        if (i != input && i != input + 1)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
