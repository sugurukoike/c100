#include <stdio.h>

int main()
{
    int int_arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < sizeof(int_arr) / sizeof(int); i++)
    {
        printf("%d\n", int_arr[i]);
    }

    return 0;
}
