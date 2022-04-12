#include <stdio.h>
#include <handy.h>
#include <math.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define COUNT 1000
#define SLEEPTIME 0.05

int main()
{
    int cx1 = 30, cy1 = 30;
    int cx2 = 570, cy2 = 370;
    int x1 = 5, y1 = 3;
    int x2 = -3, y2 = -5;
    int distance = 0;

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < COUNT; i++)
    {
        distance = pow((cx1 - cx2), 2) + pow((cy1 - cy2), 2);

        if (distance <= 3600)
        {
            HgSetFillColor(HG_RED);
        }
        else
        {
            HgSetFillColor(HG_BLUE);
        }

        HgCircleFill(cx1, cy1, RADIUS, 1);
        HgCircleFill(cx2, cy2, RADIUS, 1);
        HgSleep(SLEEPTIME);
        HgClear();

        cx1 += x1;
        cy1 += y1;

        cx2 += x2;
        cy2 += y2;

        if (cx1 >= WIDTH - RADIUS)
        {
            x1 = -5;
        }
        if (cx1 <= RADIUS)
        {
            x1 = 5;
        }
        if (cy1 >= HEIGHT - RADIUS)
        {
            y1 = -3;
        }
        if (cy1 <= RADIUS)
        {
            y1 = 3;
        }

        if (cx2 >= WIDTH - RADIUS)
        {
            x2 = -3;
        }
        if (cx2 <= RADIUS)
        {
            x2 = 3;
        }
        if (cy2 >= HEIGHT - RADIUS)
        {
            y2 = -5;
        }
        if (cy2 <= RADIUS)
        {
            y2 = 5;
        }
    }

    return 0;
}
