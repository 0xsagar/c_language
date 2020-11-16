#include <stdio.h>
#include <string.h>

int find_len(char *name);

int main()
{
    char name[100];
    printf("ENter Any String to find the length:\n");
    gets(name);
    int length = find_len(name);
    printf("length of the string '%s' is %d", name, length);
}

int find_len(char *name)
{
    int len = 0;
    while (*name)
    {
        len++;
        name++;
    }
    return len;
}