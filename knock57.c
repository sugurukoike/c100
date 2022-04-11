#include <stdio.h>

int main()
{
    int numData = 0;
    int data[100][3] = {};
    int sum_english = 0, sum_math = 0, sum_japanese = 0;
    int ave_english = 0, ave_math = 0, ave_japanese = 0;
    int sum_individual = 0;

    scanf("%d", &numData);

    for (int i = 0; i < numData; i++)
    {
        scanf("%d %d %d", &data[i][0], &data[i][1], &data[i][2]);
    }

    for (int i = 0; i < numData; i++)
    {
        sum_english += data[i][0];
        sum_math += data[i][1];
        sum_japanese += data[i][2];
    }

    ave_english = sum_english / numData;
    ave_math = sum_math / numData;
    ave_japanese = sum_japanese / numData;

    printf("平均点 英語:%d, 数学:%d, 国語:%d\n", ave_english, ave_math, ave_japanese);
    puts("個人合計点");

    for (int i = 0; i < numData; i++)
    {
        sum_individual = data[i][0] + data[i][1] + data[i][2];
        printf("%d: %d\n", i, sum_individual);
    }

    return 0;
}
