#include <stdio.h>

int main()
{
    int input = 0;
    int binary_arr[16] = {};

    printf("input number: ");
    scanf("%d", &input);

    for (int i = 0; i < 16; i++)
    {
        if (input == 0)
        {
            binary_arr[i] = 0;
        }
        else
        {
            binary_arr[i] = input % 2;
            input /= 2;
        }
    }

    for (int i = 15; i >= 0; i--)
    {
        printf("%d", binary_arr[i]);
    }

    printf("\n");

    return 0;
}
