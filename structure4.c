#include<stdio.h>
struct distance
{
    int feet;
    float inch;
}firstdistance,seconddistance, sum;
int main()
{
    printf("Enter the feetr and inch for the fitst distance \n");
    scanf("%d%f",&firstdistance.feet,&firstdistance.inch);
    printf("Enter the feet and inch for the second distance \n");
    scanf("%d%f",seconddistance.feet,&seconddistance.inch);
    sum.feet=firstdistance.feet+seconddistance.feet;
    sum.inch=firstdistance.inch+seconddistance.feet;
    
}
