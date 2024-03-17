#include<stdio.h>

void main()
{
    float interest, p, t, r;

    printf("Enter value of P: ");
    scanf("%f", &p);

    printf("Enter value of T: ");
    scanf("%f", &t);

    printf("Enter value of R: ");
    scanf("%f", &r);

    
    interest = (p*t*r)/100;
    printf("Simple interest: %f", interest);

    return 0;
}