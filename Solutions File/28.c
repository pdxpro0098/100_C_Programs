#include <stdio.h>

int main()
{
    int arr[10] = {12, 23, 34, 45, 56, 67, 78, 89, 90, 10};
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    int start = 0;
    int end = len;
    int val = 45;
    int idx = -1;

    printf("\n");
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == val)
        {
            idx = mid;
            break;
        }
        else if (arr[mid] < val)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    printf("%d", idx);
    return 0;
}