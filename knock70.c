#include <stdio.h>
#include <handy.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define COUNT 300
#define SLEEPTIME 0.05

int main()
{
    int cx = 0, cy = 0;
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
            x = -5;
        }
        if (cx <= 0)
        {
            x = 5;
        }
        if (cy >= HEIGHT)
        {
            y = -3;
        }
        if (cy <= 0)
        {
            y = 3;
        }
    }

    return 0;
}
