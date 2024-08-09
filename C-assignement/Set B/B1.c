#include<stdio.h>

int main(){
    
    float length, breadth, height;
    float door_width, door_height;
    float window_width, window_height;

    printf("Enter the length, breadth, height of the rooms in meter : ");
    scanf("%f %f %f", &length, &breadth, &height);

    
    printf("Enter the door width and Window height in meters : ");
    scanf("%f %f", & door_height, &door_width);

    printf("Enter the door width and Window height in meters : ");
    scanf("%f %f", & window_height, &window_width);
    
    float wall_area1 = 2 * (length * height);
    float wall_area2 = 2 * (breadth * height);
    float total_wall_area = wall_area1 + wall_area2;

    float door_area = door_width * door_height;

    float window_area = 2 * (window_width * window_height);

    float paint_area = total_wall_area - (door_area + window_area);

    float roof_area = length * breadth;

    printf("Area to be painted on innner walls : %.2f square meters\n", paint_area);
    printf("Area to be withstand on innner walls : %.2f square meters\n", roof_area);

}