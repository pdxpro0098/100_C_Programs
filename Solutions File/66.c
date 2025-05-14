#include <stdio.h>

int power(int base, int exp)
{
    int res = 1;
    for (int i = 1; i <= exp; i++)
    {
        res *= base;
    }
    return res;
}

int len(int num)
{
    int length = 0;
    while (num != 0)
    {
        length++;
        num /= 10;
    }
    return length;
}

int isArmstrong(int num)
{
    int sum = 0;
    int length = len(num);
    int temp = num;
    while (temp != 0)
    {
        int ld = temp % 10;
        sum += power(ld, length);
        temp /= 10;
    }
    return sum == num;
}

int main()
{
    int armstrongNums[10]; 
    int count = 0;

    for (int i = 100; i <= 999; i++)
    {
        if (isArmstrong(i))
        {
            armstrongNums[count++] = i;
        }
    }

    printf("Armstrong numbers from 100 to 1000 are:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", armstrongNums[i]);
    }

    return 0;
}