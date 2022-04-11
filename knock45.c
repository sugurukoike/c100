#include <stdio.h>

int main()
{
    int distance = 0;
    int money = 610;

    printf("距離 ");
    scanf("%d", &distance);

    if (distance <= 1700)
    {
        printf("金額 %d\n", money);
    }
    else
    {
        if (((distance - 1700) % 313) != 0)
        {
            money += 80 * ((distance - 1700) / 313 + 1);
            printf("金額 %d\n", money);
        }
        else
        {
            money += 80 * ((distance - 1700) / 313);
            printf("金額 %d\n", money);
        }
    }

    return 0;
}
