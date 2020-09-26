
// Reverse multiplication table //

#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter an integer\n"); //Reverse multiplication table will be printed of this number
    scanf("%d", &n);              //read the number and add it to the program
    for (i = 10; i >= 1; --i)     //starting from 'i=10' till 'i=1' reducing '1' each time
    {
        printf("\t%d * %d = %d\n", n, i, n * i); //the reverse mutliplication table of 'n' is printed
    }
    return 0;
}