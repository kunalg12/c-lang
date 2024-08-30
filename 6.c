#include <stdio.h>

int main()
{
    int start, end, n;
    printf("Enter the starting number of multiplication : ");
    scanf("%d", &start);

    printf("Enter the ending number of multiplication : ");
    scanf("%d", &end);

    printf("Enter the n number of multiplies : ");
    scanf("%d", &n);

    printf("\n Multiplication tables from  %d to %d (up to %d multiplies): \n",start,end, n);

    for(int i = start; i <= end; i++){
        printf("  %d\t",i);
    }
        printf("\n");
}