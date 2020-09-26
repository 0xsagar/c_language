#include <stdio.h>

int main()
{
    int i = 0;
    while (i <= 10) // till 'i' is less than 10, the process will continue
    {
        printf("%d\n", i + 10); //add '10' in the final result
        i++;                    //keep adding 1 to 'i' until the process is stopped
    }

    return 0;
}