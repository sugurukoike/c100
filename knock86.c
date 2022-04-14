#include <stdio.h>

int main()
{
    int stones = 0;
    int get_stones_cpu = 0, get_stones_player;
    int flag = 0;

    printf("石の数を入力してください（10以上）: ");
    scanf("%d", &stones);
    printf("石の数: %d\n", stones);

    if (stones % 2 == 0)
    {
        puts("ではわたしから");
        if ((stones - 10) % 4 == 0)
        {
            get_stones_cpu = 1;
            stones -= get_stones_cpu;
            printf("%d個取ります\n", get_stones_cpu);
            printf("石の数: %d\n", stones);
            flag = 1;
        }
        else
        {
            get_stones_cpu = 3;
            stones -= get_stones_cpu;
            printf("%d個取ります\n", get_stones_cpu);
            printf("石の数: %d\n", stones);
            flag = 1;
        }

        while (stones > 1)
        {
            printf("何個取る（1~3個）? ");
            scanf("%d", &get_stones_player);

            if (get_stones_player >= 4 || get_stones_player <= 0)
            {
                while (get_stones_player >= 4 || get_stones_player <= 0)
                {
                    printf("何個取る（1~3個）? ");
                    scanf("%d", &get_stones_player);
                }
            }

            stones -= get_stones_player;
            printf("石の数: %d\n", stones);
            flag = 2;

            if (stones > 3)
            {
                if (stones % 2 == 0 && get_stones_player == 3)
                {
                    get_stones_cpu = 1;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones % 2 == 0 && get_stones_player == 1)
                {
                    get_stones_cpu = 3;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones % 2 == 1)
                {
                    get_stones_cpu = 2;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
            }
            else
            {
                if (stones == 3)
                {
                    get_stones_cpu = 2;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones == 2)
                {
                    get_stones_cpu = 1;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
            }
        }
    }
    else
    {
        puts("あなたからどうぞ");
        while (stones > 1)
        {
            printf("何個取る（1~3個）? ");
            scanf("%d", &get_stones_player);

            if (get_stones_player >= 4 || get_stones_player <= 0)
            {
                while (get_stones_player >= 4 || get_stones_player <= 0)
                {
                    printf("何個取る（1~3個）? ");
                    scanf("%d", &get_stones_player);
                }
            }

            stones -= get_stones_player;
            printf("石の数: %d\n", stones);
            flag = 2;

            if (stones > 3)
            {
                if (stones % 2 == 0 && get_stones_player == 3)
                {
                    get_stones_cpu = 1;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones % 2 == 0 && get_stones_player == 1)
                {
                    get_stones_cpu = 3;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones % 2 == 1)
                {
                    get_stones_cpu = 2;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
            }
            else
            {
                if (stones == 3)
                {
                    get_stones_cpu = 2;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
                else if (stones == 2)
                {
                    get_stones_cpu = 1;
                    stones -= get_stones_cpu;
                    printf("%d個取ります\n", get_stones_cpu);
                    printf("石の数: %d\n", stones);
                    flag = 1;
                }
            }
        }
    }

    if (stones == 1)
    {
        if (flag == 1)
        {
            puts("わたしの勝ち");
        }
        else if (flag == 2)
        {
            puts("プレイヤーの勝ち");
        }
    }
    else
    {
        if (flag == 1)
        {
            puts("わたしの反則負け");
        }
        else if (flag == 2)
        {
            puts("プレイヤーの反則負け");
        }
    }

    return 0;
}
