#include <stdio.h>

int main()
{
    int num1 = 12345;
    int num2 = 7;
    int rem = 0;

    rem = num1 % num2;

    printf("%d ÷ %d の余りは %d\n", num1, num2, rem);

    return 0;
}
