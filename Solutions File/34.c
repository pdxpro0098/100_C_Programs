#include <stdio.h>

int Len(int digit)
{
    int len = 0;
    while (digit != 0)
    {
        len++;
        digit /= 10;
    }
    return len;
}

int main()
{
    int digit = 133745;
    int len = Len(digit);
    int arr[len];
    int mid;

    int i = 0;
    while (digit != 0)
    {
        arr[i] = digit % 10;
        digit /= 10;
        i++;
    }
    if (len % 2 == 0)
    {
        mid = (arr[len / 2] + arr[(len / 2) - 1]) / 2;
    }
    else
    {
        mid = arr[(len / 2)];
    }
    printf("mid %d", mid);

    return 0;
}

#include <stdio.h>

int Len(int digit)
{
    int len = 0;
    while (digit != 0)
    {
        len++;
        digit /= 10;
    }
    return len;
}
int main()
{

    int digit = 12345678;
    float mid;
    if (Len(digit) % 2 == 0)
    {
        int midTemp;
        float midSum;
        for (int i = 0; i < (Len(digit) / 2); i++)
        {
            digit /= 10;
        }
        midSum += digit % 10;
        digit /= 10;
        midSum += (digit % 10);
        mid = midSum / 2;
    }
    else
    {
        for (int i = 0; i < (Len(digit) / 2) + 1; i++)
        {
            digit /= 10;
            mid = digit % 10;
        }
    }

    printf("%0.2f", mid);
    return 0;
}