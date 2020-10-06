
//Factorial of a number using 'for' loop

#include <stdio.h>

int main()
{
    int factorial = 1, i = 0, n = 1;
    printf("\nEnter the number you want factorial of: \n\n"); //enter number 'n'
    scanf("%d", &n);                                          //read 'n' and add it to the program
    for (i = 1; i <= n; i++)                                  //from 'i=0' to 'i <=n' increasing '1' at a time
    {
        factorial *= i; //factorial = factorial * i
    }
    printf("\nThe factorial of %d is %d\n\n", n, factorial); //print the factorial of 'n'

    return 0;
}