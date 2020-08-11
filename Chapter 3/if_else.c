#include <stdio.h>

int main()
{
    int age;
    printf("Enter you age\n");
    scanf("%d", &age);

    if (age >= 18 && age <= 70)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You cannot drive\n");
    }

    return 0;
}