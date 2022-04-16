#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hit = 0, blow = 0;
    int target_arr[4] = {};
    int predict_arr[4] = {};
    int predict = 0;
    int index = 3;

    srand(time(NULL));
    for (int i = 0; i < 4; i++)
    {
        target_arr[i] = rand() % 10;
    }

    printf("4桁の数字を入力: ");
    scanf("%d", &predict);

    printf("target = ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d", target_arr[i]);
    }
    printf("\n");

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
        }
    }

    printf("%d hit\n", hit);
    return 0;
}
