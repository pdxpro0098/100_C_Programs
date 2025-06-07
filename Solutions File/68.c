// ✔️68.Program to enter a number and sort the digits in ascending order.Display the new digit so obtained.

#include <stdio.h>
#include <string.h>

int len(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int main()
{
    int num = 76358;
    int digitLen = len(num);
    int arr[digitLen];
    for (int i = 0; i < digitLen; i++)
    {
        arr[i] = num % 10;
        num /= 10;
    }

    for (int i = 0; i < digitLen; i++)
    {
        for (int j = 0; j < digitLen - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < digitLen; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}