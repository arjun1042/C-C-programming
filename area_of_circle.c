#include<stdio.h>
#include<conio.h>

void main(){
    float area, radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    area=3.14*radius*radius;
    printf("Area: %f", area);
    getch();
}