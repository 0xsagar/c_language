
//Factorial of a number using 'while' loop

#include <stdio.h>

int main()
{
    int factorial = 1, i = 1, n = 1;
    printf("Enter the number you want factorial of: \n"); //enter number 'n'
    scanf("%d", &n);                                      //read 'n' and add it to the program
    while (i <= n)                                        //continue until 'i' is less than 'n'
    {
        factorial *= i; //factorial = factorial * i
        i++;            //increasing '1' at a time
    }

    printf("The factorial of %d is %d", n, factorial); //print the factorial of 'n'

    return 0;
}