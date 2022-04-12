#include <stdio.h>
#include <handy.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define COUNT 300
#define SLEEPTIME 0.05

int main()
{
    int cx1 = 30, cy1 = 30;
    int cx2 = 30, cy2 = 30;
    int x1 = 5, y1 = 3;
    int x2 = 3, y2 = 5;

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < COUNT; i++)
    {
        HgCircle(cx1, cy1, RADIUS);
        HgCircle(cx2, cy2, RADIUS);
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
