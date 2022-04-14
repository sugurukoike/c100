#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int ans = 0;
    int input = 101;
    int cnt = 0;

    srand(time(NULL));
    ans = rand();
    ans %= 100;

    while (ans != input)
    {
        printf("数を入力: ");
        scanf("%d", &input);

        cnt += 1;
        if (input < ans)
        {
            puts("それより大きいです");
        }
        else if (input > ans)
        {
            puts("それより小さいです");
        }
    }

    printf("正解!! %d回でクリア\n", cnt);

    return 0;
}
