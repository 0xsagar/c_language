#include <stdio.h>

int printArray(int arr[], int size)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d\t", arr[j]);
    }
    printf("\n");
}
int sortArray(int arr[], int size)
{
    for (int step = 1; step < size; step++)
    {
        printArray(arr, size);
        int key = arr[step];
        int j = step - 1;

        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            --j;
        }
    }
}

int main()
{
    int i, array[100];
    printf("How many elements you want to add?\n");
    scanf("%d", &i);
    for (int j = 0; j < i; j++)
    {
        int data;
        printf("Element %d :", j + 1);
        scanf("%d", &data);
        array[j] = data;
    }

    int size = i;
    sortArray(array, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(array, size);
}