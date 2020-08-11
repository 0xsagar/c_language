#include <stdio.h>

int main()
{
    int radius;
    float pi = 3.14;
    printf("Enter the radius of the circle\n");
    scanf("%d", &radius);
    printf("The Area of this Circle is %f\n", pi * radius * radius);
    printf("The Circumference of this Circle is %f\n", 2 * pi * radius);
    return 0;
}