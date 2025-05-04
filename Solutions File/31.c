#include <stdio.h>

#define LEN(arr) (sizeof(arr)) / sizeof(arr[0])

int main()
{

    int num = 34573;
    int numCP = num;
    int len = 0;
    while (numCP != 0)
    {
        numCP /= 10;
        len++;
    }

    int arr[len];
    int i = 0;
    while (num != 0)
    {
        arr[i] = num % 10;
        num /= 10;
        i++;
    }

    int idx[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    for (int i = 0; i < LEN(arr); i++)
    {
        idx[arr[i]]++;
    }

    for (int i = 0; i < LEN(idx); i++)
    {
        for (int j = 0; j < idx[i]; j++)
        {

            printf("%d", i);
        }
    }

    return 0;
}