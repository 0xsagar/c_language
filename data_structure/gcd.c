#include <stdio.h>

int gcd(int a, int b)
{
    if (a == b)
        return a;
    else if (a > b)
    {
        return gcd(a - b, a);
    }
    else if (b > a)
    {
        return gcd(a, b - a);
    }
}

int main()
{
    int a, b;
    printf("\nEnter Two Positive Number:\n");
    scanf("%d%d", &a, &b);
    printf("gcd of %d and %d is %d", a, b, gcd(a, b));
    return 0;
}