#include <stdio.h>

int main()
{
    int factorial = 1, i = 1, n = 1;
    printf("Enter the number you want factorial of: \n");
    scanf("%d", &n);
    while (i<=n)
    {
        factorial*=i;
        i++;
    }
    
    printf("The factorial of %d is %d", n, factorial);

    return 0;
}