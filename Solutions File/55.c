#include <stdio.h>

int main()
{
    int n = 20;
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("Even : %d\n", i);
            evenCount += i;
        }
        else
        {
            printf("Odd : %d\n", i);
            oddCount += i;
        }
    }
    printf("\n");
    printf("even sum :%d", evenCount);
    printf("\n");
    printf("Odd sum :%d", oddCount);

    return 0;
}