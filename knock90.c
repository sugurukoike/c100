#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int sum_calculate();

int main()
{
    int cards_num[52] = {};
    char cards_suit[52][10] = {};
    int count = 50;
    int first_card_index = 0, second_card_index = 1;
    int sum = 0;

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

    srand(time(NULL));
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

    sum = sum_calculate(cards_num[first_card_index], cards_num[second_card_index]);

    printf("%d %d : 合計%d\n", cards_num[first_card_index], cards_num[second_card_index], sum);

    return 0;
}

int sum_calculate(int card_num1, int card_num2)
{
    int sum = 0;

    if (card_num1 == 11 || card_num1 == 12 || card_num2 == 13)
    {
        card_num1 = 10;
    }
    if (card_num2 == 11 || card_num2 == 12 || card_num2 == 13)
    {
        card_num2 = 10;
    }

    if (card_num1 == 1)
    {
        if (21 - card_num2 >= 11)
        {
            card_num1 = 11;
        }
    }
    if (card_num2 == 1)
    {
        if (21 - card_num1 >= 11)
        {
            card_num2 = 11;
        }
    }

    sum = card_num1 + card_num2;

    return sum;
}
