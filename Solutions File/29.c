// 29. Program to perform Linear Search in a given array of numbers:

#include <stdio.h>
#define LEN(arr) (sizeof(arr)) / sizeof(arr[0])

int main()
{
    int search = 8;
    int arr[] = {2, 4, 8, 5};
    for (int i = 0; i < LEN(arr); i++)
        if (search == arr[i])
            printf("%d", i);

    return 0;
}