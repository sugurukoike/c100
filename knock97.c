#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int bingo[75] = {};
    int shuffle_num = 50;
    int new_line = 0;

    for (int i = 0; i < 75; i++)
    {
        bingo[i] = i + 1;
    }

    srand(time(NULL));
    for (int i = 0; i < shuffle_num; i++)
    {
        int tmp = 0, index1 = 0, index2 = 0;

        index1 = rand();
        index1 %= 75;
        index2 = rand();
        index2 %= 75;

        tmp = bingo[index1];
        bingo[index1] = bingo[index2];
        bingo[index2] = tmp;
    }

    for (int i = 0; i < 25; i++)
    {
        printf("%d\t", bingo[i]);
        new_line += 1;

        if (new_line % 5 == 0)
        {
            printf("\n");
        }
    }

    return 0;
}
