#include <stdio.h>

int main()
{
    int int_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};

    for (int i = 0; i < 9; i++)
    {
        printf("%d\n", int_arr[i] - int_arr[i + 1]);
    }

    return 0;
}
