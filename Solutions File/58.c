v#include <stdio.h>

int main()
{
    int i;
    int arr[12];

    for (i = 1; i <= 10; i++)
    {
        printf("Enter the %d number: ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < 11; i++)
    {
        printf("The square of %d is %d\n", arr[i], arr[i] * arr[i]);
    }
    return 0;
}
