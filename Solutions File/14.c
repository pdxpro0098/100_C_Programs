#include <stdio.h>

int main()
{
    char string[26] = "qazwsxplmoknijedcyuhbrfvtg";
    int len = sizeof(string);

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
