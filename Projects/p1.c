#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess;
    srand(time(0));
    number = rand() % 100 + 1; //generates a random number between 1 and 100
    printf("\nGuess the number between 1 and 100\n");
    //keep running the loop until the number is guessed
    do
    {
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Yay! You guessed it in %d attempts\n", nguess);
        }
        nguess++;

    } while (guess = number);

    return 0;
}