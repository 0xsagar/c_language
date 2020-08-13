#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
    {
        printf("It's a leap year\n");
    }
    else
    {
        printf("It's not a Leap year");
    }
    return 0;
}