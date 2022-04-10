#include <stdio.h>

int main()
{
    int input1 = 0, input2 = 0;
    int sum = 0, difference = 0, product = 0, quotient = 0, remainder = 0;

    printf("input 1st number: ");
    scanf("%d", &input1);
    printf("input 2nd number: ");
    scanf("%d", &input2);

    sum = input1 + input2;
    difference = input1 - input2;
    product = input1 * input2;
    quotient = input1 / input2;
    remainder = input1 % input2;

    printf("和: %d\n差: %d\n積: %d\n商: %d, 余り: %d\n", sum, difference, product, quotient, remainder);

    return 0;
}
