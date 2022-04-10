#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input < -10)
    {
        printf("range1\n");
    }
    else if (input >= -10 && input < 0)
    {
        printf("range2\n");
    }
    else
    {
        printf("range3\n");
    }

    return 0;
}
