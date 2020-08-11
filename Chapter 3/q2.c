#include <stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float total;
    printf("Enter marks obtained in subject 1(Out of 100)\n");
    scanf("%d", &sub1);

    printf("Enter marks obtained in subject 2(Out of 100)\n");
    scanf("%d", &sub2);

    printf("Enter marks obtained in subject 3(Out of 100)\n");
    scanf("%d", &sub3);

    total = (sub1 + sub2 + sub3) / 3;

    if ((total < 40) || (sub1 < 33) || (sub2 < 33) || (sub3 < 33))
    {
        printf("Your total percentage is %f and you failed\n", total);
    }
    else
    {
        printf("Your total percentage is %f and you passed\n", total);
    }
    return 0;
}