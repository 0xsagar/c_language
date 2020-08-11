#include <stdio.h>

int main()
{
    int principal, rate, time;
    printf("Enter the principal amount in rupees\n");
    scanf("%d", &principal);
    printf("Enter the annual rate of interest\n");
    scanf("%d", &rate);
    printf("Enter the time duration in years\n");
    scanf("%d", &time);
    printf("The Simple Interest is %d\n", (principal * rate * time) / 100);
    return 0;
}