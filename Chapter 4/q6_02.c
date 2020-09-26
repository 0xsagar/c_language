
/* Sum of first n integers */

#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("\nEnter the value of 'n'\n"); //Enter the value of n
    scanf("%d", &n);                      //read n and add it to the program
    for (i = 0; i <= n; i++)              //starting from 'i=0' till 'i=n' increasing 1 each time
    {
        sum += i; // "sum = sum + i" which remembers and adds all the values upto n
    }
    printf("\nThe sum of first 'n' numbers is %d\n\n", sum); //printing the sum of values from 0 to n

    return 0;
}