#include <stdio.h>

int main()
{
    int celsius, fahrenheit;
    printf("Enter the temperature in Celsius\n");
    scanf("%d", &celsius);
    printf("The temperature in Fahrenheit is %f\n", celsius * 1.8 + 32);
    return 0;
}