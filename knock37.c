#include <stdio.h>

int main()
{
    int int_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int index = 0, next_index = 0;

    printf("input index: ");
    scanf("%d", &index);

    next_index = int_arr[index];

    printf("value = %d\n", int_arr[next_index]);

    return 0;
}
