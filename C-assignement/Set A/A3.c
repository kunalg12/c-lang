#include<stdio.h>

int main(){

    int value1 , value2, temp;

    printf("Enter the value 1 : ");
    scanf("%d", &value1);

    printf("Enter the value 2 : ");
    scanf("%d", &value2);

    temp = value1;
    value1 = value2;
    value2 = temp;

    printf("Value1 is:  %d\n" , value1);
    printf("Value2 is:  %d\n" , value2);

    return 0;

}