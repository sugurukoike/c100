#include <stdio.h>

int main()
{
    int numData;
    int data[100];
    int max = 0, min = 10000000;

    scanf("%d", &numData);

    for (int i = 0; i < numData; i++)
    {
        scanf("%d", &data[i]);
    }

    for (int i = 0; i < numData; i++)
    {
        if (max <= data[i])
        {
            max = data[i];
        }

        if (min >= data[i])
        {
            min = data[i];
        }
    }

    printf("最小値 = %d, 最大値 = %d\n", min, max);

    return 0;
}
