#include <stdio.h>

int isMagic(int n)
{
    int sum = 0;
    while (n > 0 || sum > 9)
    {
        if (n == 0)
        {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }

    return (sum == 1);
}

int main()
{

    printf("%d", isMagic(1234));
    return 0;
}