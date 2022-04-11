#include <stdio.h>

int main()
{
    int yen = 0, yen_per_dollar = 0;

    printf("何円?: ");
    scanf("%d", &yen);
    printf("1ドルは何円?: ");
    scanf("%d", &yen_per_dollar);

    printf("%d円は%dドル%dセント\n", yen, yen / yen_per_dollar, yen % yen_per_dollar * 100 / yen_per_dollar);

    return 0;
}
