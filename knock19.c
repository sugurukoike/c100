#include <stdio.h>

int main()
{
    int int_arr[5] = {0, 0, 0, 0, 0};
    int input = 0;

    for (int i = 0; i < sizeof(int_arr) / sizeof(int); i++)
    {
        printf("input number: ");
        scanf("%d", &input);

        int_arr[i] = input;
    }

    for (int i = 0; i < sizeof(int_arr) / sizeof(int); i++)
    {
        printf("%d\n", int_arr[i]);
    }

    return 0;
}
