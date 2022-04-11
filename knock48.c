#include <stdio.h>

int main()
{
    int input = 0;
    int cnt = 1;

    printf("input number: ");
    scanf("%d", &input);

    while (input != 1)
    {
        if (input % 2 == 0)
        {
            input /= 2;
            printf("%d: %d\n", cnt, input);
            cnt += 1;
        }
        else
        {
            input *= 3;
            input += 1;
            printf("%d: %d\n", cnt, input);
            cnt += 1;
        }
    }

    return 0;
}
