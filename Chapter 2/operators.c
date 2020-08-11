#include <stdio.h>

int main()
{
    int x = 2, y = 3, z = 3, k = 1;
    int result = 3 * x / y - z + k;
    // Using the following operator series 
    // ( * , / , % ) > ( + , - ) > ( = )
    printf("The result is %d\n", result);
    return 0;
}