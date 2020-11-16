#include <stdio.h>

int del_e(int arr[], int size, int element)
{
    /* Search The ELement */
    int pos;
    for (int n = 0; n < size; n++)
    {
        if (element == arr[n])
        {
            pos = n;
        }
    }
    size--;
    for (int j = pos; j < size; j++)
    {
        arr[j] = arr[j + 1];
    }
    return size;
}

int main()
{
    int array[100], position, n, c, element;
    printf("Enter the number of elements in array\n");
    scanf("%d", &n);

    printf("Enter %d elements in array\n", n);
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    for (c = 0; c < n; c++)
    {
        printf("%d\t", array[c]);
    }
    printf("\n");
    printf("What do you want to delete:\n");
    scanf("%d", &element);

    int size = del_e(array, n, element);
    for (int j = 0; j < size; j++)
    {
        printf("%d\t", array[j]);
    }
}