#include <stdio.h>

int get_digit(int num);

int main()
{
    int birth = 0;
    int fate_num = 0;
    int digit = 0;

    printf("誕生日をYYYYMMDDの形式で入力してください: ");
    scanf("%d", &birth);

    digit = get_digit(birth);

    for (int i = 0; i < digit; i++)
    {
        fate_num += birth % 10;
        birth /= 10;
    }

    if (fate_num >= 10)
    {
        if (fate_num / 10 == fate_num % 10)
        {
            printf("運命数は%d\n", fate_num);
        }
        else
        {
            while (fate_num >= 10)
            {
                int new_fate_num = 0;
                digit = get_digit(fate_num);

                for (int i = 0; i < digit; i++)
                {
                    new_fate_num += fate_num % 10;
                    fate_num /= 10;
                }

                if (new_fate_num / 10 == new_fate_num % 10)
                {
                    printf("運命数は%d\n", new_fate_num);
                    break;
                }

                fate_num = new_fate_num;
            }
            printf("運命数は%d\n", fate_num);
        }
    }
    else
    {
        printf("運命数は%d\n", fate_num);
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
