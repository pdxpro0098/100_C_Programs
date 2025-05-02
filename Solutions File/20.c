#include <stdio.h>

int main()
{
    int vowelCount = 0;
    char str[] = "aeiou";
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            vowelCount++;
        i++;
    }
    printf("%d", vowelCount);

    return 0;
}