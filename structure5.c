#include<stdio.h>
struct complex
{
    float real;
    float imag;
}cnum1,cnum2,sum;
int main()
{
    printf("Enter real and imaginary part of first complex number");
    scanf("%f%f",&cnum1.real,&cnum1.imag);
    printf("Enter real and imaginary part of second complex number");
    scanf("%f%f",&cnum2.real,&cnum2.imag);
    sum.real=cnum1.real+cnum2.real;
    sum.imag=cnum1.imag+cnum2.imag;
    printf("Sum = %0.2f+i %0.2f",sum.real,sum.imag);
    return 0;
}

