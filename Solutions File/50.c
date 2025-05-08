#include <stdio.h>

int main()
{
    int num = 36;
    int i = 2;
    while (num > 1)
    {
        while (num % i == 0)
        {
            printf("%d ", i);
            num /= i;
        }
        i++;
    }

    return 0;
}