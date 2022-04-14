#include <stdio.h>

int main()
{
    int cpu_ans = 50;
    int min = 1, max = 99;
    int player_ans = 2;
    int cnt = 0;

    while (player_ans != 0)
    {
        printf("%dですか? ", cpu_ans);
        scanf("%d", &player_ans);
        cnt += 1;

        if (player_ans == -1)
        {
            max = cpu_ans;
            cpu_ans = min + (max - min) / 2;
        }
        else if (player_ans == 1)
        {
            min = cpu_ans;
            cpu_ans = min + (max - min) / 2;
        }
    }

    printf("%d回で当てました\n", cnt);

    return 0;
}
