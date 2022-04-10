#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input > 0)
    {
        for (int i = 0; i < input; i++)
        {
            printf("*");
        }
    }
    printf("\n");

    return 0;
}
