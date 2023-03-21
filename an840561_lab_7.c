#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int i, j,temp;
    int count = 0;

    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            // swaps
            if (arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }

    printf("\nbubbleSort swaps %d time(s)\n\n", count);
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};

    int n = 9;

    printf("Array before sorting: \n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}