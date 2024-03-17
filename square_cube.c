#include<stdio.h>
#include<conio.h>

void main(){
    int number, square, cube;

    printf("Enter number: ");
    scanf("%d", &number);

    square = number*number;
    printf("Square of number is: %d",square);

    cube = square*number;
    printf("cube of number is: %d",cube);

    getch();

}
