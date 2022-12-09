#include <stdio.h>
int getSumDigits(int );
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("Sum of all digits of %d is %d\n", n, getSumDigits(n));
    return 0;
}
int getSumDigits(int no)
{
    int sum = 0;
    while (no)
    {
        sum += no % 10;
        no /= 10;
    }
    return sum;
}