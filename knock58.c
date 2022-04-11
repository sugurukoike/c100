#include <stdio.h>

int main()
{
    int data[5];

    for (int i = 0; i < 5; i++)
    {
        printf("input data[%d]: ", i);
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        int cnt = 0;

        printf("%d\t:", data[i]);

        for (int j = 0; j < data[i]; j++)
        {
            printf("*");
            cnt += 1;

            if (cnt % 5 == 0)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
