#include <stdio.h>
int fact(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    return fact;
}

int factSum(int num)
{
    int factSum = 0;
    while (num != 0)
    {
        int ld = num % 10;
        factSum += fact(ld);
        num /= 10;
    }

    return factSum;
}
int main()
{
    int num = 123;
    printf("%d", factSum(num));
    return 0;
}
