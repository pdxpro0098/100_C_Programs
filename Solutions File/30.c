#include <stdio.h>

int main()
{
    int arr[3][3] = {{1, 2, 3},
                     {4, 5, 6},
                     {7, 8, 9}};
    int rowSum = 0;
    int colSum = 0;
    printf("Row sum: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            rowSum += arr[i][j];
        }
        printf("%d ", rowSum);
        rowSum = 0;
    }
    printf("\nCol sum: ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            colSum += arr[j][i];
        }
        printf("%d ", colSum);
        colSum = 0;
    }

    return 0;
}