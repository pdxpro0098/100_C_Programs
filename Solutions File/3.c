#include <stdio.h>

int main()
{
    int matrix[3][3];
    int counter = 1;
    // Adding natural numbers to matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] = counter;
            counter++;
        }
    }
    // printing above matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", matrix[i][j]);
        }
        printf("\n");
    }

    // row sum

    int rSum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rSum = rSum + matrix[i][j];
        }
        printf("rSum = %d", rSum);
        rSum = 0;
        printf("\n");
    }

    // column sum
    int cSum = 0;
    int j;
    int i;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cSum = cSum + matrix[j][i];
        }
        printf("cSum = %d", rSum);
        cSum = 0;
    }

    // diagonal sum top left to bottom right

    int dSum = 0;
    int j;
    int i;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
            {
                dSum += matrix[i][j];
            }
        }
    }
    printf("%d ", dSum);

    // diagonal sum top right to bottom left
    int d2sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            if (i == j)
            {
                d2sum += matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("%d", d2sum);

    return 0;
}
