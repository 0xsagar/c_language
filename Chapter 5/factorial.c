#include <stdio.h>

int factorial(int x);

int main()
{
    int a;
    printf("\nGive me the factorial of (insert an integer)\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}