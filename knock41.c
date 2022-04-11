#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input > 0 && input <= 9)
    {
        printf("%d is a single figure.\n", input);
    }
    else
    {
        printf("%d is not a single figure.\n", input);
    }

    return 0;
}
