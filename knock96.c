#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int hit = 0, blow = 0;
    int target_arr[4] = {};
    int cnt = 1;

    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        target_arr[i] = rand() % 10;
    }

    while (true)
    {
        int index = 3;
        int predict = 0;
        int predict_arr[4] = {};
        int flag_arr[4] = {};

        printf("%d回目\n", cnt);

        printf("4桁の数字を入力: ");
        scanf("%d", &predict);

        for (int i = 0; i < 4; i++)
        {
            predict_arr[index] = predict % 10;
            index -= 1;
            predict /= 10;
        }

        for (int i = 0; i < 4; i++)
        {
            if (predict_arr[i] == target_arr[i])
            {
                hit += 1;
                flag_arr[i] = -1;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (predict_arr[i] == target_arr[j] && flag_arr[j] != -1)
                {
                    blow += 1;
                    flag_arr[j] = -1;
                    continue;
                }
            }
        }

        if (hit == 4)
        {
            break;
        }
        else
        {
            printf("%d hit, %d blow\n", hit, blow);

            hit = 0;
            blow = 0;
            cnt += 1;
        }
    }

    puts("正解");

    return 0;
}
