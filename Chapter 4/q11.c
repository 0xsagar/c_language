#include <stdio.h>

int main()
{
    int n, prime = 1;
    printf("\nEnter the mumber to be checked\n\n"); //enter a number to check if it's a prime or not
    scanf("%d", &n);                                //read it and add it to the program
    for (int i = 2; i < n; i++)                     //from 'i=2' till 'i<n' increasing '1' at a time
    {
        if (n % i == 0) //check if the number is divisible by and other number b/w '2' and itself (it will give remainder '0')
        {
            prime = 0; //if it's divisible then it's not a prime number
            break;     //so break the loop
        }
    }
    if (prime == 0) //check and print
    {
        printf("\n%d is a not a prime number\n\n", n);
    }
    else
    {
        printf("\n%d is a prime number\n\n", n);
    }

    return 0;
}