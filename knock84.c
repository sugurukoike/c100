#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int cards_num[52] = {};
    char cards_suit[52][10] = {};
    int count = 100;

    for (int i = 0; i < 13; i++)
    {
        cards_num[i] = i + 1;
        strcpy(cards_suit[i], "Spades");
    }
    for (int i = 13; i < 26; i++)
    {
        cards_num[i] = i - 12;
        strcpy(cards_suit[i], "Hearts");
    }
    for (int i = 26; i < 39; i++)
    {
        cards_num[i] = i - 25;
        strcpy(cards_suit[i], "Diamonds");
    }
    for (int i = 39; i < 52; i++)
    {
        cards_num[i] = i - 38;
        strcpy(cards_suit[i], "Clubs");
    }

    for (int i = 0; i < count; i++)
    {
        int tmp_num = 0, index1 = 0, index2 = 0;
        char tmp_suit1[10], tmp_suit2[10];

        index1 = rand();
        index1 %= 52;

        index2 = rand();
        index2 %= 52;

        tmp_num = cards_num[index1];
        cards_num[index1] = cards_num[index2];
        cards_num[index2] = tmp_num;

        strcpy(tmp_suit1, cards_suit[index1]);
        strcpy(tmp_suit2, cards_suit[index2]);
        strcpy(cards_suit[index1], tmp_suit2);
        strcpy(cards_suit[index2], tmp_suit1);
    }

    for (int i = 0; i < 52; i++)
    {
        printf("%s%d\n", cards_suit[i], cards_num[i]);
    }

    return 0;
}
