#include <stdio.h>

int main()
{
    int marks;
    printf("Enter your marks (0-100)\n");
    scanf("%d", &marks);

    if (marks > 80 && marks <= 100)
        {
            printf("Your grade is A\n");
        }

    else if (marks > 60 && marks <= 80)
        {
            printf("Your grade is B\n");
        }

    else if (marks >= 40 && marks <= 60)
        {
            printf("Your grade is C\n");
        }

    else if (marks >= 0 && marks <= 40)
        {
            printf("Your grade is D and you've Failed!\n");
        }
    else
    {
        printf("Invalid input\n");
    }
    
    return 0;
}