#include <stdio.h>
#include <handy.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define COUNT 300
#define SLEEPTIME 0.05

int main()
{
    int cx = 30, cy = 30;
    int x = 5, y = 3;

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < COUNT; i++)
    {
        HgCircle(cx, cy, RADIUS);
        HgSleep(SLEEPTIME);
        HgClear();

        cx += x;
        cy += y;

        if (cx >= WIDTH)
        {
            cx = 0;
        }

        if (cy >= HEIGHT)
        {
            cy = 0;
        }
    }

    return 0;
}
