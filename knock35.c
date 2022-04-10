#include <stdio.h>

int main()
{
    int int_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int input = 0;

    printf("input number: ");
    scanf("%d", &input);

    printf("array[%d] = %d\n", input, int_arr[input]);

    return 0;
}
