#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, nextTerm;
    printf("\nPrinting Fabonacci Series\n");
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d\t", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main()
{
    int n;
    printf("How many terms of Fabonacci Series you want to print?\n");
    scanf("%d", &n);
    fibonacci(n);
}