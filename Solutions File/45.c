#include <stdio.h>

int main()
{
    int num = 36;
    for (int i = 1; i <= num; i += 2)
    { 
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}