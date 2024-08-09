#include <stdio.h>

int main()
{

    char inputChar;
    char nextChar, prevChar;

    printf("Enter the Character: ");
    scanf(" %c", &inputChar);

    if ((inputChar >= 'a' && inputChar <= 'z') || (inputChar >= 'A' && inputChar <= 'Z'))
    {

        prevChar = inputChar - 1;
        nextChar = inputChar + 1;

        if (inputChar == 'a')
        {
            prevChar = 'z';
        }
        else if (inputChar == 'A')
        {
            prevChar = 'Z';
        }

        if (inputChar == 'a')
        {
            nextChar = 'z';
        }
        else if (inputChar == 'A')
        {
            nextChar = 'Z';
        }

        printf("The Previous Character is '%c'.\n", prevChar);
        printf("The Next Character is '%c'.\n", nextChar);
    }
    else
    {
        printf("Error: Input must an Alphbetical order");
    }

    return 0;
}