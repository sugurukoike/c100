#include <stdio.h>
#include <handy.h>

int main()
{
    int cx = 0, cy = 0, radius = 10;
    int left_cx = 0, under_cy = 0;

    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);

    left_cx = cx - 30 * 2;
    under_cy = cy - 30 * 2;

    HgOpen(600, 400);

    for (int i = 0; i < 5; i++)
    {
        HgCircle(left_cx, cy, radius);
        left_cx += 30;
    }

    for (int i = 0; i < 5; i++)
    {
        HgCircle(cx, under_cy, radius);
        under_cy += 30;
    }

    HgSleep(5);
    HgClose();

    return 0;
}
