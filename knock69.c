#include <stdio.h>
#include <handy.h>

int main()
{
    int num_of_square = 0;
    int one_side_length = 0;
    int cnt = 0;
    int x = 0, y = 0;
    int rem = 0;
    int rem_one_side_length = 0;

    printf("マス目の数: ");
    scanf("%d", &num_of_square);

    one_side_length = 600 / num_of_square;
    rem = 600 % num_of_square;
    rem_one_side_length = 600 / num_of_square + 1;

    HgOpen(600, 600);

    if (num_of_square % 2 == 0)
    {
        for (int i = 0; i < num_of_square; i++)
        {
            for (int j = 0; j < num_of_square; j++)
            {
                if (i % 2 == 0 && j % 2 == 0)
                {
                    HgSetFillColor(HG_BLACK);
                }
                else if (i % 2 == 0 && j % 2 == 1)
                {
                    HgSetFillColor(HG_WHITE);
                }
                else if (i % 2 == 1 && j % 2 == 0)
                {
                    HgSetFillColor(HG_WHITE);
                }
                else
                {
                    HgSetFillColor(HG_BLACK);
                }

                HgBoxFill(x, y, one_side_length, one_side_length, 1);

                x += one_side_length;
            }

            x = 0;
            y += one_side_length;
        }
    }
    else
    {
        for (int i = 0; i < num_of_square * num_of_square; i++)
        {
            if (i % 2 == 0)
            {
                HgSetFillColor(HG_BLACK);
            }
            else
            {
                HgSetFillColor(HG_WHITE);
            }

            if (rem != 0)
            {
                HgBoxFill(x, y, rem_one_side_length, rem_one_side_length, 1);
                x += rem_one_side_length;
                cnt += 1;
                rem -= 1;
            }
            else
            {
                HgBoxFill(x, y, one_side_length, one_side_length, 1);
                x += one_side_length;
                cnt += 1;
                rem -= 1;
            }

            if (cnt % num_of_square == 0)
            {
                x = 0;
                y += one_side_length;
                rem = 600 % one_side_length;
            }
        }
    }

    HgSleep(5);
    HgClose();

    return 0;
}
