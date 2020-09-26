#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter n numbers to be printed in reverse order\n");

    /*'n' means the number of first 'n' numbers to be printed in reverse order*/

    scanf("%d", &n);    //read 'n' and add it to the program
    for (a = n; a; a--) //start from 'n' to '1' reducing '1' each time
    {
        printf("\t%d\n", a); //print 'n' natural numbers in reverse order
    }

    return 0;
}