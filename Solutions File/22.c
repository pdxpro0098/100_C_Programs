
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "lets reverse this string for no reason";
    char word[100] = "\0";
    int strIdx = 0;
    int wordIdx = 0;
    int wc = 1;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ' ')
            wc++;

    for (int i = 0; i < 7; i++)
    {
        for (; str[strIdx] != ' ' && str[strIdx] != '\0'; strIdx++, wordIdx++)
        {
            word[wordIdx] = str[strIdx];
        }
        word[wordIdx] = '\0', wordIdx = 0;
        strIdx++;
        strrev(word);
        printf(" %s ", word);
    }
    return 0;
}
