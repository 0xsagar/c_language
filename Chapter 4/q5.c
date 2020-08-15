#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter an integer\n");
    scanf("%d", &n);
    for (i = 10; i >= 1; --i)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}