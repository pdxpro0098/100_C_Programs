#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i < 5; i++)
    {
        if (i % 2 != 0)
        {
            printf("-%d", i);
        }
        if (i % 2 == 0)
        {
            printf("+%d", i);
        }
        if (i == 4)
        {
            printf("......n");
        }
    }

    return 0;
}
