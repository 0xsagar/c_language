#include <stdio.h>
#include <string.h>

/* Copy a string */
int cpy_str(char *source, char *target)
{
    int i = 0;
    while (*source != '\0')
    {
        target[i++] = *source++; /*target [1] = source[1]*/
    }
    target[i] = '\0';
}

int main()
{
    char s[100], t[100];
    printf("Enter any string to copy to target\n");
    gets(s);
    cpy_str(s, t);
    printf("Copied String is: '%s'", t);
}