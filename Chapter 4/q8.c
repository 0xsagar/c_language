#include <stdio.h>

int main()
{
    int i, sum=0, n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        sum = sum + (n*i);
    }
    printf("\nSum of the multiplication table of %d is %d", n, sum);
    return 0;
}