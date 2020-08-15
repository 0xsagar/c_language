#include <stdio.h>

int main()
{
    int a,n;
    printf("Enter n numbers to be printed in reverse order\n");
    scanf("%d", &n);
    for ( a = n; a ; a--)
    {
        printf("The number is %d\n", a);
    }
    
    return 0;
}