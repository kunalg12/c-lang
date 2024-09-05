#include<stdio.h>

int main(){

    int a,b;

    printf("Enter the number a & b : ");
    scanf("%d %d",&a, &b);

    for(int i = a; i <= b; i++){
        for( int j = i; j <= 10; j++)
        printf("%d %d = %d\t", j,i, i * j);
    }
    
    return 0;
}