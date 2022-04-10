#include <stdio.h>

int main()
{
    int int_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int index = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", int_arr[index]);

        index = int_arr[index];
    }

    return 0;
}
