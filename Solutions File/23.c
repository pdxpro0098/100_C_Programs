#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Charater map in action";
    int charMap[26] = {0}, len = strlen(str);

    for (int i = 0; i < len; i++)
        if (str[i] >= 65 && str[i] <= 90)
            str[i] += 32;

    for (int i = 0; i < len; i++)
        charMap[str[i] - 'a']++;

    for (int i = 0, j = 'a'; i < 26, j <= 'z'; i++, j++)
        if (charMap[i] != 0)
            printf("%c: %d \n", j, charMap[i]);

    return 0;
}
