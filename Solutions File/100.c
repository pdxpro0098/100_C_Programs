#include <stdio.h>

int main()
{
    char arr[] = {'D', 'A', 'L', 'I', 'P', ' ', 'K', 'U', 'M', 'A', 'R', '\0'};

    for (int i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] % 2 != 0)
        {
            printf("%c\n", arr[i]);
        }
    }
    return 0;
}
