#include <stdio.h>

int main()
{
    int year = 0;

    printf("input year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d年は閏年である\n", year);
    }
    else
    {
        printf("%d年は閏年ではない\n", year);
    }

    return 0;
}
