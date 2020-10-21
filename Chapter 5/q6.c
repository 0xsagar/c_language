#include <stdio.h>

int sum(int n);

int main()
{
    int n = 0;
    printf("Find the sum of first __ natural numbers\n");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is\n", n);
    printf("%d", sum(n));
    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return n + sum(n - 1);
    }
}