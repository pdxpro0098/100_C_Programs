#include <stdio.h>
#define LEN(arr) sizeof(arr) / sizeof(arr[0])

int main()
{
    char arr[] = "DALIP";
    for (int i = 0; i <= LEN(arr) - 2; i++)
    {
        for (int j = i + 1; j < LEN(arr) - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                char temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("%s", arr);

    return 0;
}
