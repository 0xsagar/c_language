#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, nextTerm;
    printf("\nPrinting Fabonacci Series\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d\t", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
}

int main()
{
    int a;
    printf("How many terms of Fabonacci Series you want to print?\n");
    scanf("%d", &a);
    fibonacci(a);
}