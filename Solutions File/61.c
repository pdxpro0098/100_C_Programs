// Krish's Approach
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

// Dalip's Approach
#include <stdio.h>

int main()
{
    int n = 12345;
    int reverse = 0, original_value;
    original_value = n;

    while (original_value > 0)
    {
        n = original_value;
        reverse = 0;

        while (n > 0)
        {
            reverse = (reverse * 10) + (n % 10);
            n /= 10;
        }
        printf("%d ", original_value);
        printf("%d, ", reverse);

        original_value /= 10;
    }

    return 0;
}
