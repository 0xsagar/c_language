#include <stdio.h>
//calculating fahrenheit using celcius with functions
float fahrenheit(float celcius);

int main()
{
    float celcius, result;
    printf("\nEnter the temperature in degree celcius\n");
    scanf("%f", &celcius);
    printf("%f degree celcius is %f fahrenheit\n", celcius, fahrenheit(celcius));
    return 0;
}

float fahrenheit(float celcius)
{
    float result;
    result = (float)(celcius * 1.8 + 32);
    return result;
}