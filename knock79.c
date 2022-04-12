#include <stdio.h>
#include <handy.h>
#include <stdlib.h>
#include <math.h>

#define WIDTH 400
#define HEIGHT 400
#define RADIUS 5

int main()
{
    double pi;
    int random_x = 0, random_y = 0;
    int distance = 0;
    int total_points = 10000;
    int red_points = 0;

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < total_points; i++)
    {
        random_x = rand();
        random_x %= 400;
        random_y = rand();
        random_y %= 400;

        distance = pow(random_x, 2) + pow(random_y, 2);

        if (distance <= 400 * 400)
        {
            red_points += 1;
            HgSetFillColor(HG_RED);
            HgCircleFill(random_x, random_y, RADIUS, 1);
        }
        else
        {
            HgSetFillColor(HG_BLUE);
            HgCircleFill(random_x, random_y, RADIUS, 1);
        }
    }
    HgSleep(0.5);

    pi = red_points * 4.0 / total_points;
    printf("pi = %lf\n", pi);
}
