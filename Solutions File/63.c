#include <stdio.h>

int main()
{
    int largest_deviser_count = 0;
    int largest_deviser_number = 0;
    int i;
    for (i = 1; i <= 10000; i++)
    {
        int divCount = 0;

        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divCount++;
            }
        }

        if (largest_deviser_count < divCount)
        {
            largest_deviser_number = i;
            largest_deviser_count = divCount;
        }
    }

    printf("HDC %d\n", largest_deviser_count);
    printf("HDN %d\n", largest_deviser_number);

    return 0;
}