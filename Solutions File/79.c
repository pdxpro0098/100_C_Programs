#include <stdio.h>
#include <math.h>

#define SIZE(array) sizeof(array) / sizeof(array[0]);

double average(int array[], int length)
{
    double sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
    }
    return sum / length;
}

double sumOfSquares(int array[], int length)
{
    int ARRAY[length];
    for (int i = 0; i < length; i++)
    {
        ARRAY[i] = array[i];
    }

    double mean = average(ARRAY, length);
    int sumOfSquare = 0;
    for (int i = 0; i < length; i++)
    {
        ARRAY[i] = ARRAY[i] - mean;
        ARRAY[i] *= ARRAY[i];
        sumOfSquare += ARRAY[i];
    }
    return sumOfSquare;
}

double standardDeviation(int data[], int length)
{
    double mean = average(data, length);
    double sumSquare = sumOfSquares(data, length);
    double Variance = sumSquare / length;
    double StandardDeviation = sqrt(Variance);
    return StandardDeviation;
}

int main()
{
    int data[] = {56, 65, 74, 75, 76, 77, 80, 81, 91};
    int len = SIZE(data);

    return 0;
}