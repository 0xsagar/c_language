#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("Enter the value of n(numbers) you want the sum of\n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum +=i;
        i++;
    }
    printf("The value of sum(1-10) is %d", sum);

    return 0;
}