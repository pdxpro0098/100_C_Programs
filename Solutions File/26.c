#include <stdio.h>

void selectionSort(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        int min = i;
        for (int j = i; j < len; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main()
{
    int arr[] = {12, 2, 1, 3, 6, 33, 44, 25, 76, 87, 18, 79, 10};
    int len = 14;
    selectionSort(arr, len);
    for (int i = 0; i < 14; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}