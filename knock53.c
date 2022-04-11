#include <stdio.h>

int main()
{
    int input = 0;
    int divide = 2;

    printf("input number: ");
    scanf("%d", &input);

    while (input != 1)
    {
        if (input % divide == 0)
        {
            printf("%d ", divide);
            input /= divide;
        }
        else
        {
            divide += 1;
        }
    }

    printf("\n");

    return 0;
}
