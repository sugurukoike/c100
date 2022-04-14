#include <stdio.h>

int main()
{
    int a[15][15] = {0};

    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;

    printf("%d\n", a[0][0]);
    printf("%d %d\n", a[1][0], a[1][1]);

    for (int i = 2; i < 15; i++)
    {
        a[i][0] = 1;
        printf("%d ", a[i][0]);

        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d ", a[i][j]);
        }

        a[i][i] = 1;
        printf("%d\n", a[i][i]);
    }

    return 0;
}
