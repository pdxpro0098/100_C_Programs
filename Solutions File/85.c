#include <stdio.h>
#include <string.h>
#define size 11

int main()
{

    char str[size] = "krish dalip";
    for (int i = 0; i <= size; i++)
    {
        printf("%c", str[size-i]);
    }

    return 0;
}