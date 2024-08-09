#include <stdio.h>

int main()
{

    int amount;
    int notes_1, notes_5, notes_10;

    printf("Enter the amount to withdrawn : ");
    scanf("%d", &amount);

    notes_10 = amount / 10;
    amount = amount % 10;

    notes_5 = amount / 5;
    amount = amount % 5;

    notes_1 = amount;

    printf("Number of 10 denomination notes: %d\n", notes_10);
    printf("Number of 5 denomination notes: %d\n", notes_5);
    printf("Number of 1 denomination notes: %d\n", notes_1);

    return 0;
}