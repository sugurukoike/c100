#include <stdio.h>

int main()
{
    for (int i = 1; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            printf("aho %d\n", i);
        }
        else if (i % 10 == 3)
        {
            printf("aho %d\n", i);
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
