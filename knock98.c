#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int bingo[75] = {};
    int num_of_lottery[75] = {};
    int shuffle_num = 50;
    int new_line = 0;
    int cnt = 1;
    int hit = 0, hit_index = 0;
    int flag = 0;

    for (int i = 0; i < 75; i++)
    {
        bingo[i] = i + 1;
        num_of_lottery[i] = i + 1;
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

    for (int i = 0; i < shuffle_num; i++)
    {
        int tmp = 0, index1 = 0, index2 = 0;

        index1 = rand();
        index1 %= 75;
        index2 = rand();
        index2 %= 75;

        tmp = num_of_lottery[index1];
        num_of_lottery[index1] = num_of_lottery[index2];
        num_of_lottery[index2] = tmp;
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

    for (int i = 0; i < 75; i++)
    {
        hit = num_of_lottery[hit_index];
        hit_index += 1;

        printf("%d個目: %d\n", cnt, hit);
        cnt += 1;

        for (int j = 0; j < 25; j++)
        {
            if (bingo[j] == hit)
            {
                bingo[j] = 0;
                puts("あった!");
                break;
            }
        }

        for (int j = 0; j < 25; j++)
        {
            printf("%d\t", bingo[j]);
            new_line += 1;

            if (new_line % 5 == 0)
            {
                printf("\n");
            }
        }

        for (int j = 0; j < 25; j += 5)
        {
            if (bingo[j] == bingo[j + 1] && bingo[j + 1] == bingo[j + 2] && bingo[j + 2] == bingo[j + 3] && bingo[j + 3] == bingo[j + 4])
            {
                flag = 1;
            }
        }
        for (int j = 0; j < 5; j++)
        {
            if (bingo[j] == bingo[j + 5] && bingo[j + 5] == bingo[j + 10] && bingo[j + 10] == bingo[j + 15] && bingo[j + 15] == bingo[j + 20])
            {
                flag = 1;
            }
        }
        if (bingo[0] == bingo[6] && bingo[6] == bingo[12] && bingo[12] == bingo[18] && bingo[18] == bingo[24])
        {
            flag = 1;
        }
        if (bingo[4] == bingo[8] && bingo[8] == bingo[12] && bingo[12] == bingo[16] && bingo[16] == bingo[20])
        {
            flag = 1;
        }

        if (flag == 1)
        {
            puts("***** BINGO *****");
            break;
        }
    }

    return 0;
}
