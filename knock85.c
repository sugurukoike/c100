#include <stdio.h>

int main()
{
    int stones = 0;
    int get_stones = 0;
    int flag = 0;

    printf("石の数を入力してください（10以上）: ");
    scanf("%d", &stones);
    printf("石の数: %d\n", stones);

    while (stones > 1)
    {
        puts("プレイヤー1の番です");
        printf("何個取る（1~3個）? ");
        scanf("%d", &get_stones);

        if (get_stones >= 4 || get_stones <= 0)
        {
            while (get_stones >= 4 || get_stones <= 0)
            {
                puts("プレイヤー1の番です");
                printf("何個取る（1~3個）? ");
                scanf("%d", &get_stones);
            }
        }
        stones -= get_stones;
        printf("石の数: %d\n", stones);
        flag = 1;

        puts("プレイヤー2の番です");
        printf("何個取る（1~3個）? ");
        scanf("%d", &get_stones);

        if (get_stones >= 4 || get_stones <= 0)
        {
            while (get_stones >= 4 || get_stones <= 0)
            {
                puts("プレイヤー2の番です");
                printf("何個取る（1~3個）? ");
                scanf("%d", &get_stones);
            }
        }

        stones -= get_stones;
        printf("石の数: %d\n", stones);
        flag = 2;
    }

    if (stones == 1)
    {
        if (flag == 1)
        {
            puts("プレイヤー1の勝ち");
        }
        else if (flag == 2)
        {
            puts("プレイヤー2の勝ち");
        }
    }
    else
    {
        if (flag == 1)
        {
            puts("プレイヤー1の反則負け");
        }
        else if (flag == 2)
        {
            puts("プレイヤー2の反則負け");
        }
    }

    return 0;
}
