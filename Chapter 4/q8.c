#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    printf("\nEnter the value of n\n"); //enter the number of which you want the sum of it's multiplication table
    scanf("%d", &n);                    //read 'n' and add it to the program

    for (i = 1; i <= 10; i++) //starting from 'i=1' until 'i=10' increasing 1 at a time
    {
        printf("%d * %d = %d\n", n, i, n * i); //printing the multlipication table of 'n'
        sum = sum + (n * i);                   //adding each line's result showing it under sum
    }
    printf("\nSum of the multiplication table of %d is %d\n\n", n, sum); //the final sum of our multiplication table
    return 0;
}