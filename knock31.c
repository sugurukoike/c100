#include <stdio.h>

int main()
{
    int input = 0;
    int cnt = 0;

    printf("input number: ");
    scanf("%d", &input);

    if (input > 0)
    {
        for (int i = 0; i < input; i++)
        {
            printf("*");
            cnt += 1;

            if (cnt % 5 == 0)
            {
                printf(" ");
            }
        }
    }
    printf("\n");

    return 0;
}
