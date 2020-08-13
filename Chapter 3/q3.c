#include <stdio.h>
int main()

/* Tax Amount Finder */

{
    int income;
    float tax = 0;
    printf("Enter your annual income\n");
    scanf("%d", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);
    }
    if (income > 500000 && income <= 1000000)
    {
        tax = 12500 + 0.20 * (income - 500000);
    }
    if (income > 1000000)
    {
        tax = 112500 + 0.30 * (income - 1000000);
    }
    printf("Net tax to be paid is %f\n", tax);
    return 0;
}