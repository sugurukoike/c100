#include <stdio.h>

int main()
{
    int input1 = 0, input2 = 0, input3 = 0;

    printf("input number 1: ");
    scanf("%d", &input1);
    printf("input number 2: ");
    scanf("%d", &input2);
    printf("input number 3: ");
    scanf("%d", &input3);

    if ((input1 <= input2) && (input2 <= input3))
    {
        printf("OK\n");
    }
    else
    {
        printf("NG\n");
    }

    return 0;
}
