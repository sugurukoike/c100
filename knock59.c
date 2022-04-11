#include <stdio.h>

int main()
{
    int a[3][3] = {}, b[3][3] = {};
    int sum[3][3] = {};

    puts("1つめの行列");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &a[i][0], &a[i][1], &a[i][2]);
    }

    puts("2つめの行列");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d", &b[i][0], &b[i][1], &b[i][2]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    puts("和");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%d\t%d\n", sum[i][0], sum[i][1], sum[i][2]);
    }

    return 0;
}
