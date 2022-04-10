#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("not zero\n");
    }

    return 0;
}
