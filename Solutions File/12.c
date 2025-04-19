#include <stdio.h>

void pfact(int num)
{
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
}

int main()
{
    pfact(1050);

    return 0;
}
