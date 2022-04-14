#include <stdio.h>

int max(int num1, int num2);

int main()
{
    int num1 = 0, num2 = 0;
    int cnt = 0;

    printf("2つの値をスペースで区切って入力: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 2; i < max(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cnt += 1;
        }
    }

    if (cnt == 0)
    {
        printf("互いに素\n");
    }
    else
    {
        printf("互いに素でない\n");
    }

    return 0;
}

int max(int num1, int num2)
{
    if (num1 >= num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
