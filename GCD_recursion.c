#include <stdio.h>
int gcd(int, int);
int main()
{
    int x, y, GCD;
    printf("Enter the two numbers to find their GCD: ");
    scanf("%d%d", &x, &y);
    GCD = gcd(x, y);
    printf("The GCD Of The Given Numbers is %d.\n",  GCD);
}
int gcd(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            return gcd(x - y, y);
        }
        else
        {
            return gcd(x, y - x);
        }
    }
    return x;
}