#include <stdio.h>
#include <handy.h>

int main()
{
    int cx = 0, cy = 0, radius = 10;
    int left_up_cx = 0, left_up_cy = 0;
    int left_down_cx = 0, left_down_cy = 0;

    printf("円の中心座標を入力: ");
    scanf("%d %d", &cx, &cy);

    left_up_cx = cx - 30 * 2;
    left_up_cy = cy + 30 * 2;

    left_down_cx = cx - 30 * 2;
    left_down_cy = cy - 30 * 2;

    HgOpen(600, 400);

    for (int i = 0; i < 5; i++)
    {
        HgCircle(left_up_cx, left_up_cy, radius);
        left_up_cx += 30;
        left_up_cy -= 30;
    }

    for (int i = 0; i < 5; i++)
    {
        HgCircle(left_down_cx, left_down_cy, radius);
        left_down_cx += 30;
        left_down_cy += 30;
    }

    HgSleep(5);
    HgClose();

    return 0;
}
