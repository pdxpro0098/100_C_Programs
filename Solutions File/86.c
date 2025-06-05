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
#include <stdio.h>

int main()
{
    char string[100];
    scanf("%s", &string);
    int len = 0;
    while (string[len] != '\0')
    {
        len++;
    }
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (string[j] > string[j + 1])
            {
                char temp = string[j];
                string[j] = string[j + 1];
                string[j + 1] = temp;
            }
        }
    }
    printf("%s", string);

    return 0;
}