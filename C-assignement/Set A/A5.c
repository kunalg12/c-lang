#include<stdio.h>

#define length l
#define breadth b
#define height h
int main(){
    int l, b, h, surface_area, volume;

    printf("Enter the Length : ");
    scanf("%d", & l);
    printf("Enter the breadth : ");
    scanf("%d", & b);
    printf("Enter the height : ");
    scanf("%d", & h);

    surface_area = 2 * (l*b + l*h + l*h);
    volume = l*b*h;

    printf("The surface area is : %d\n",surface_area);
    printf("The surface area is : %d ",volume);

    return 0;
}