#include <stdio.h>
#include <handy.h>

int main()
{
    int cx = 0, cy = 0, radius = 80;
    int x = 0, y = 0, width = 0, height = 0;

    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);

    x = cx - radius;
    y = cy - radius;
    width = 2 * radius;
    height = width;

    HgOpen(600, 400);
    HgCircle(cx, cy, radius);
    HgBox(x, y, width, height);
    HgSleep(5);
    HgClose();

    return 0;
}
