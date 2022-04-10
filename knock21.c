#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input > 5 && input < 20)
    {
        printf("OK\n");
    }

    return 0;
}
