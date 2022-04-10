#include <stdio.h>

int main()
{
    int input = 0;
    int three_times_input = 0;

    printf("input number: ");
    scanf("%d", &input);

    three_times_input = input * 3;

    printf("answer = %d\n", three_times_input);

    return 0;
}
