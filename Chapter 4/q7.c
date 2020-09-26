
// Sum of first n numbers using while loop //

#include <stdio.h>

int main()
{
    int i = 0, sum = 0, n;
    printf("\nEnter the value of n(numbers) you want the sum of\n"); //Enter the value of n
    scanf("%d", &n);                                                 //read n and add it to the program

    while (i <= n) //while 'i' is less than 'n' the process will continue
    {
        sum += i; //sum = sum + i
        i++;      //increasing '1' each time until process is stopped
    }
    printf("\nThe sum of first %d numbers is %d\n\n", n, sum); //printing the total sum of n numbers

    return 0;
}