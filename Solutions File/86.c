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