#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter the value of n\n"); //n means the number of first n natural numbers to be printed
    scanf("%d", &n);                  //read 'n' and add to program
    for (a = 1; a <= n; a++)          //start form '1' till 'n' adding +1 each time
    {
        printf("\t%d\n", a); //printing the first n natural numbers
    }

    return 0;
}