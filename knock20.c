#include <stdio.h>

int main()
{
    int input1 = 0, input2 = 0;
    int result1 = 0, result2 = 0;

    printf("input 1st value: ");
    scanf("%d", &input1);
    printf("input 2nd value: ");
    scanf("%d", &input2);

    result1 = input1 / input2;
    result2 = result1 * input2;

    printf("result1: %d\nresult2: %d\n", result1, result2);

    return 0;
}
