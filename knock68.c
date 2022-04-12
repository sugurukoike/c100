#include <stdio.h>
#include <handy.h>

int main()
{
    int num_of_square = 0;
    int one_side_length = 0;
    int rem_h = 0, rem_v = 0;
    int vertical_line = 0, horizontal_line = 0;

    printf("マス目の数: ");
    scanf("%d", &num_of_square);

    one_side_length = 600 / num_of_square;

    vertical_line = one_side_length;
    horizontal_line = one_side_length;

    rem_h = 600 % num_of_square;
    rem_v = 600 % num_of_square;

    HgOpen(600, 600);

    for (int i = 0; i < num_of_square - 1; i++)
    {
        if (rem_h != 0)
        {
            horizontal_line += 1;
            HgLine(horizontal_line, 0, horizontal_line, 600);
            horizontal_line += one_side_length;
            rem_h -= 1;
        }
        else
        {
            HgLine(horizontal_line, 0, horizontal_line, 600);
            horizontal_line += one_side_length;
        }
    }

    for (int i = 0; i < num_of_square - 1; i++)
    {
        if (rem_v != 0)
        {
            vertical_line += 1;
            HgLine(0, vertical_line, 600, vertical_line);
            vertical_line += one_side_length;
            rem_v -= 1;
        }
        else
        {
            HgLine(0, vertical_line, 600, vertical_line);
            vertical_line += one_side_length;
        }
    }

    HgSleep(5);
    HgClose();

    return 0;
}
