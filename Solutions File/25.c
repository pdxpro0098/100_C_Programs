#include <stdio.h>

int main()
{

    int arr[10] = {2, 5, 3, 1, 4, 6, 0, 9, 8, 7};
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}