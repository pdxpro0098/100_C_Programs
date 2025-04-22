
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            printf("-%d", i);
        }
        if (i % 2 == 0)
        {
            printf("+%d", i);
        }
        if (i == n)
        {
            printf("......n");
        }
    }

    return 0;
}

