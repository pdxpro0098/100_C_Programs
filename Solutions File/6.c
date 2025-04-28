#include <stdio.h>

int main()
{
    int oddSum = 0;
    int oddCount = 0;
    int evenSum = 0;
    int evenCount = 0;

    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            evenSum += i;
            evenCount++;
        }
        else
        {
            oddSum += i;
            oddCount++;
        }
    }

    float evenAverage = evenSum / evenCount;
    float oddAverage = oddSum / oddCount;
    printf("Even sum : %d \nOdd sum : %d \n", evenSum, oddSum);
    printf("Even average : %0.2f \nOdd average : %0.2f ", evenAverage, oddAverage);

    return 0;
}