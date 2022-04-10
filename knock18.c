#include <stdio.h>

int main()
{
    int input = 0;
    int int_arr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    printf("input number: ");
    scanf("%d", &input);

    for (int i = 0; i < sizeof(int_arr) / sizeof(int); i++)
    {
        int_arr[i] = input;
    }

    for (int i = 0; i < sizeof(int_arr) / sizeof(int); i++)
    {
        printf("%d\n", int_arr[i]);
    }
}
