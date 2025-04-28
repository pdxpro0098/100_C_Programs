#include <stdio.h>

int perfect(int num)
{
    int factSum = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            factSum += i;
        }
    }
    if (factSum == num)
    {
        printf("perfect square : %d", factSum);
    }
}
int main()
{
for (int i = 0; i < 1000; i++)
{
    perfect(i);
}

    return 0;
}