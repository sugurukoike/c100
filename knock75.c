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

    HgOpen(WIDTH, HEIGHT);

    for (int i = 0; i < COUNT; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            HgCircle(circle_arr[j][0], circle_arr[j][1], RADIUS);
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
            }
            if (circle_arr[j][0] <= RADIUS)
            {
                velocity_arr[j][0] = -1 * velocity_arr[j][0];
            }
            if (circle_arr[j][1] >= HEIGHT - RADIUS)
            {
                velocity_arr[j][1] = -1 * velocity_arr[j][1];
            }
            if (circle_arr[j][1] <= RADIUS)
            {
                velocity_arr[j][1] = -1 * velocity_arr[j][1];
            }
        }
    }

    return 0;
}
