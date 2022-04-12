#include <stdio.h>
#include <handy.h>

#define WIDTH 600
#define HEIGHT 400
#define RADIUS 30
#define COUNT 300
#define SLEEPTIME 0.05

int main()
{
    int circle_arr[5][2] = {{30, 30}, {30, 30}, {30, 30}, {30, 30}, {30, 30}};
    int velocity_arr[5][2] = {{1, 5}, {2, 4}, {3, 3}, {4, 2}, {5, 1}};
    int color_cnt[5] = {0, 0, 0, 0, 0};

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < COUNT; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (color_cnt[j] % 4 == 0)
            {
                HgSetFillColor(HG_RED);
            }
            else if (color_cnt[j] % 4 == 1)
            {
                HgSetFillColor(HG_BLUE);
            }
            else if (color_cnt[j] % 4 == 2)
            {
                HgSetFillColor(HG_GREEN);
            }
            else
            {
                HgSetFillColor(HG_YELLOW);
            }
            HgCircleFill(circle_arr[j][0], circle_arr[j][1], RADIUS, 1);
        }
        HgSleep(SLEEPTIME);
        HgClear();

        for (int j = 0; j < 5; j++)
        {
            circle_arr[j][0] += velocity_arr[j][0];
            circle_arr[j][1] += velocity_arr[j][1];

            if (circle_arr[j][0] >= WIDTH - RADIUS)
            {
                velocity_arr[j][0] = -1 * velocity_arr[j][0];
                color_cnt[j] += 1;
            }
            if (circle_arr[j][0] <= RADIUS)
            {
                velocity_arr[j][0] = -1 * velocity_arr[j][0];
                color_cnt[j] += 1;
            }
            if (circle_arr[j][1] >= HEIGHT - RADIUS)
            {
                velocity_arr[j][1] = -1 * velocity_arr[j][1];
                color_cnt[j] += 1;
            }
            if (circle_arr[j][1] <= RADIUS)
            {
                velocity_arr[j][1] = -1 * velocity_arr[j][1];
                color_cnt[j] += 1;
            }
        }
    }

    return 0;
}
