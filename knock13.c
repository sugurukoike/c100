#include <stdio.h>

int main()
{
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    for (int i = 0; i <= input; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
