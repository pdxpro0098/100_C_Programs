#include <stdio.h>
int main()
{
    int nums[10];
    int max = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf(" %d", &nums[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    int min = max;
    for (int i = 0; i < 5; i++)
    {
        if (min > nums[i])
        {
            min = nums[i];
        }
    }

    printf("%d\n", max);
    printf("%d\n", min);

    return 0;
}