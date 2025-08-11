#include <stdio.h>
#include <limits.h>

int main()
{
    int array[3][3];

    printf("Enter 9 integers for the 3x3 array:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    int max = INT_MIN;
    int maxIdx[2];

    int min = INT_MAX;
    int minIdx[2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                maxIdx[0] = i;
                maxIdx[1] = j;
            }
            if (array[i][j] < min)
            {
                min = array[i][j];
                minIdx[0] = i;
                minIdx[1] = j;
            }
        }
    }
    printf("max = %d'\n", max);
    printf("max %d %d\n", maxIdx[0], maxIdx[1]);
    printf("min = %d'\n", min);
    printf("min %d %d\n", minIdx[0], minIdx[1]);

    return 0;
}
