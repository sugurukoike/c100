#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    int max = 0, min = 0;

    printf("3つの値を入力: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2)
    {
        max = num1;
    }
    else
    {
        max = num2;
    }
    if (num3 >= max)
    {
        max = num3;
    }

    if (num1 <= num2)
    {
        min = num1;
    }
    else
    {
        min = num2;
    }
    if (num3 <= min)
    {
        min = num3;
    }

    if (num1 < max && num1 > min)
    {
        printf("%d\n", num1);
    }
    else if (num2 < max && num2 > min)
    {
        printf("%d\n", num2);
    }
    else if (num3 < max && num3 > min)
    {
        printf("%d\n", num3);
    }
    else
    {
        if (num1 == num2)
        {
            printf("%d\n", num1);
        }
        else if (num2 == num3)
        {
            printf("%d\n", num2);
        }
        else if (num3 == num1)
        {
            printf("%d\n", num3);
        }
    }

    return 0;
}
