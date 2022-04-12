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

        if (cx >= WIDTH - RADIUS)
        {
            x = -5;
        }
        if (cx <= RADIUS)
        {
            x = 5;
        }
        if (cy >= HEIGHT - RADIUS)
        {
            y = -3;
        }
        if (cy <= RADIUS)
        {
            y = 3;
        }
    }

    return 0;
}
