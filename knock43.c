#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    int D = 0;

    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);
    printf("input c: ");
    scanf("%d", &c);

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        printf("2つの実数解\n");
    }
    else if (D == 0)
    {
        printf("重解\n");
    }
    else
    {
        printf("2つの虚数解\n");
    }

    return 0;
}
