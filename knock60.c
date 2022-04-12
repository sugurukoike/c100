#include <stdio.h>
#include <handy.h>

int main()
{
    int cx = 0, cy = 0;
    int radius = 50;

    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);

    HgOpen(600, 400);
    HgCircle(cx, cy, radius);
    HgSleep(5);
    HgClose();

    return 0;
}
