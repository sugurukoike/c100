#include <stdio.h>

int main()
{
    int input_a = 0, input_b = 0;
    int tmp = 0;

    printf("input a: ");
    scanf("%d", &input_a);
    printf("input b: ");
    scanf("%d", &input_b);

    tmp = input_a;
    input_a = input_b;
    input_b = tmp;

    printf("a = %d, b = %d\n", input_a, input_b);

    return 0;
}
