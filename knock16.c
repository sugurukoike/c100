#include <stdio.h>
#include <stdbool.h>

int main()
{
    int input = 0;

    while (true)
    {
        printf("input number: ");
        scanf("%d", &input);

        if (input == 0)
        {
            break;
        }
    }

    return 0;
}
