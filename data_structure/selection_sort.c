#include <stdio.h>

void printArray(int array[], int size);

// function to swap the the position of two elements
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            // To sort in descending order, change > to < in this line.
            // Select the minimum element in each loop.
            if (array[i] < array[min_idx])
                min_idx = i;
        }

        // put min at the correct position
        swap(&array[min_idx], &array[step]);
        printArray(array, size);
    }
}

// function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

// driver code
int main()
{
    int i, array[100];
    printf("How many elements you want ot add?\n");
    scanf("%d", &i);
    for (int j = 0; j < i; j++)
    {
        int data;
        printf("Element %d :\t", j + 1);
        scanf("%d", &data);
        array[j] = data;
    }

    int size = i;
    selectionSort(array, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(array, size);
}