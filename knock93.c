#include <stdio.h>

int get_digit();

int main()
{
    int start = 0, end = 0;
    int digit = 0;

    printf("start: ");
    scanf("%d", &start);
    printf("end: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i++)
    {
        int flag = 0;
        int num = i;

        digit = get_digit(num);

        if (i % 3 == 0)
        {
            flag = 1;
        }
        else
        {
            for (int j = 0; j < digit; j++)
            {
                if (num % 10 == 3)
                {
                    flag = 1;
                }
                num = num / 10;
            }
        }

        if (flag == 1)
        {
            printf("aho %d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

int get_digit(int num)
{
    int digit = 0;

    while (num != 0)
    {
        num /= 10;
        digit += 1;
    }

    return digit;
}
