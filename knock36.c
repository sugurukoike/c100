#include <stdio.h>

int main()
{
    int int_arr[10] = {3, 7, 0, 8, 4, 1, 9, 6, 5, 2};
    int index1 = 0, index2 = 0;
    int product = 0;

    printf("input index1: ");
    scanf("%d", &index1);
    printf("input index2: ");
    scanf("%d", &index2);

    product = int_arr[index1] * int_arr[index2];

    printf("%d * %d = %d\n", int_arr[index1], int_arr[index2], product);

    return 0;
}
