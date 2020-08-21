#include <stdio.h>

int main()
{
    int i, n = 10, sum = 0;

    for (i = 0; i <= n; i++)
    {
        sum +=i;
    }
    printf("The value of sum(1-10) is %d", sum);

    return 0;
}