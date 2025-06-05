#include <stdio.h>

int len(int a)
{
    int len = 0;
    for (a; a > 0; a /= 10)
    {
        len++;
    }
    return len;
}
int main()
{

    int i, j, b, temp = 0;
    int a = 46786355, d = len(a);

    int arr[d];
    for (int i = 0; i < d; i++)
    {
        arr[i] = a % 10;
        a /= 10;
    }

    for (i = 0; i < d; i++)
    {
        for (j = i + 1; j < d; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        printf("%d", arr[i]);
    }

    return 0;
}
