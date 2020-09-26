
// Multiplication table //

#include <stdio.h>

int main()
{
    int i, n;
    printf("Enter an integer\n"); //enter the number of which you want a multiplication table
    scanf("%d", &n);              //read the number and add it to program
    for (i = 1; i <= 10; ++i)     //starting from 'i=1' till 'i=10' increasing +1 each time
    {
        printf("\t%d * %d = %d\n", n, i, n * i); //multiply the inserted number with 'i' will the program ends
    }

    return 0;
}