#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("Enter the mumber to be checked\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime == 0 && n != 2)
    {
        printf("It is a not a prime number\n");
    }
    else
    {
        printf("It is a prime number\n");
    }

    return 0;
}