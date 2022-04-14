#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int your_hand = 0, cpu_hand = 0;
    int your_wins = 0, cpu_wins = 0;

    while (your_wins + cpu_wins < 5)
    {
        printf("あなたの手を選んでください(グー0、チョキ1、パー2): ");
        scanf("%d", &your_hand);

        if (your_hand != 0 && your_hand != 1 && your_hand != 2)
        {
            printf("そんな手はありません。あなたの負け\n");
            cpu_wins += 1;
            printf("あなた%d勝、わたし%d勝\n", your_wins, cpu_wins);
            continue;
        }

        srand(time(NULL));
        cpu_hand = rand();
        cpu_hand %= 3;

        if (cpu_hand == 0)
        {
            printf("コンピュータはグー\n");
        }
        else if (cpu_hand == 1)
        {
            printf("コンピュータはチョキ\n");
        }
        else
        {
            printf("コンピュータはパー\n");
        }

        if (your_hand == cpu_hand)
        {
            printf("あいこ\n");
            continue;
        }
        else if (your_hand != 2 && your_hand < cpu_hand)
        {
            printf("あなたの勝ち\n");
            your_wins += 1;
        }
        else if (your_hand != 2 && your_hand > cpu_hand)
        {
            printf("あなたの負け\n");
            cpu_wins += 1;
        }
        else if (your_hand == 2 && cpu_hand == 0)
        {
            printf("あなたの勝ち\n");
            your_wins += 1;
        }
        else if (your_hand == 2 && cpu_hand == 1)
        {
            printf("あなたの負け\n");
            cpu_wins += 1;
        }

        printf("あなたの%d勝、わたしの%d勝\n", your_wins, cpu_wins);
    }

    if (your_wins > cpu_wins)
    {
        printf("あなたの総合勝利です。参りました。\n");
    }
    else
    {
        printf("わたしの総合勝利です。またの挑戦をお待ちしています。\n");
    }

    return 0;
}
