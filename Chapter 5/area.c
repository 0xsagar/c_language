#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of area is %f", pow(side, 2)); //as the pow function gives a double value so use float
    return 0;
}
//to run this  file(including math.h) functions, use command-> gcc filename.c -o filename -lm