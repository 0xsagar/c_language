#include <stdio.h>

int swap(int *a, int *b);
int sortArray(int arr[], int size);
void printArray(int arr[], int size);

int main()
{
    int i, array[100];
    printf("How many elements you want to enter?\n");
    scanf("%d", &i);
    for (int j = 0; j < i; j++)
    {
        int data;
        printf("Element %d :\t", j + 1);
        scanf("%d", &data);
        array[j] = data;
    }

    int size = i;
    sortArray(array, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(array, size);
}

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int sortArray(int arr[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        //taking first element as minimum
        int min_index = step;
        //compare to other positions
        for (int i = step + 1; i < size; i++)
        {
            if (arr[i] < arr[min_index])
            {
                min_index = i;
            }
        }

        swap(&arr[min_index], &arr[step]);
        printArray(arr, size);
    }
}

void printArray(int arr[], int size)
{
    for (int j = 0; j < size; ++j)
    {
        printf("%d\t", arr[j]);
    }
    printf("\n");
}