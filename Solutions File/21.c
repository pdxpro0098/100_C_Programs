#include <stdio.h>
#include <string.h>

void encodeDecode(char str[], int code)
{
    int len = strlen(str);
    char encoded[len + 1];

    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z') 
        {
            int pos = str[i] - 'A';
            pos = (pos + code) % 26;
            if (pos < 0)
                pos += 26; 
            encoded[i] = 'A' + pos;
        }
        else
        {
            encoded[i] = str[i]; 
        }
    }

    encoded[len] = '\0';
    puts(encoded);
}

int main()
{
    encodeDecode("ABCXYX", 2); 
    encodeDecode("ABCDE", -3); 
    return 0;
}
