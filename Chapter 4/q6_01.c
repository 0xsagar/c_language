
// Sum of first 10 integers

#include <stdio.h>

int main()
{
    int i, n = 10, sum = 0; //

    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("\nThe value of sum(1-10) is %d\n\n", sum);

    return 0;
}