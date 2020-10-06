#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;                //generates a random number between 1 and 100
    printf("\nThe number is %d\n\n", number); //print the random number
    return 0;
}