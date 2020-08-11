#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Results: %d\n", num % 69);
    printf("Getting 0 means the number is divisible by 69");
    return 0;
}