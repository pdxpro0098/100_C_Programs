#include <stdio.h>

int main()
{
    int i, j, length;

    int arr[] = {6, 3, 7, 2, 8, 5, 9, 4};
    length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length; i++)
    {
        for (j = i + 1; j < length; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
        printf(" %d", arr[i]);
    }

    return 0;
}
