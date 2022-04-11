#include <stdio.h>

int main()
{
    int money = 0;
    int coin_100 = 0, coin_10 = 0, coin_1 = 0;

    printf("input money: ");
    scanf("%d", &money);

    coin_100 = money / 100;
    coin_10 = (money - 100 * coin_100) / 10;
    coin_1 = (money - 100 * coin_100) % 10;

    printf("100円玉%d枚, 10円玉%d枚, 1円玉%d枚\n", coin_100, coin_10, coin_1);

    return 0;
}
