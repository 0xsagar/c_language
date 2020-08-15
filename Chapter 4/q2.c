#include <stdio.h>

int main()
{
    int a,n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (int a = 0; a <= n; a++)
    {
        printf("The values are %d\n", a);
    }
    
    return 0;
}