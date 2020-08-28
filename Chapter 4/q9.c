#include <stdio.h>

int main()
{
    int factorial = 1, i = 0, n = 1;
    printf("Enter the number you want factorial of: \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %d is %d", n, factorial);

    return 0;
}