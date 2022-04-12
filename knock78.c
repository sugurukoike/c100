#include <stdio.h>
#include <handy.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define SLEEPTIME 0.05
#define T 70

int main()
{
    int x0 = 30, y0 = 30;
    int vx = 10, vy = 25;
    int x = 30, y = 30;

    HgOpen(WIDTH, HEIGHT);

    for (int t = 0; t < T; t++)
    {
        x = x0 + vx * t;
        y = y0 + vy * t + (-1) * t * t / 2;

        HgCircle(x, y, RADIUS);
        HgSleep(SLEEPTIME);
        HgClear();
    }

    return 0;
}
