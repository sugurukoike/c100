#include <stdio.h>

int main()
{
    int people = 0;
    int admission_fee = 600;

    printf("人数 ");
    scanf("%d", &people);

    if (people >= 5 && people < 20)
    {
        admission_fee = 550;
        printf("料金 %d\n", admission_fee * people);
    }
    else if (people >= 20)
    {
        admission_fee = 500;
        printf("料金 %d\n", admission_fee * people);
    }
    else
    {
        printf("料金 %d\n", admission_fee * people);
    }

    return 0;
}
