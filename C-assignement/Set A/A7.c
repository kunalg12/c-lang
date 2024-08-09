#include<stdio.h>

int main(){

    char inputChar;

    printf("Enter the Character : ");
    scanf("%c", &inputChar);

    printf("The ASCII value of '%c' is %d.\n", inputChar , (int)(inputChar));
    return 0;
}