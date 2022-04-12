#include <stdio.h>
#include <handy.h>

int main()
{
    int x = 200, y = 100, width = 200, height = 200;
    int cx = 0, cy = 0, radius = 0;

    radius = width / 2;
    cx = x + width / 2;
    cy = y + height / 2;

    HgOpen(600, 400);
    HgBox(x, y, width, height);
    HgCircle(cx, cy, radius);
    HgSleep(5);
    HgClose();

    return 0;
}
