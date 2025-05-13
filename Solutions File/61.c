#include <stdio.h>

int revNum(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int r = num % 10;
        rev = rev * 10 + r;
        num /= 10;
    }
    return rev;
}

int main()
{
    int revloop = 0;
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
            revloop = revloop * 10 + j;
        }

        printf(" \n");
        printf("%d", revNum(revloop));
        printf(" \n");
        revloop = 0;
    }

    return 0;
}