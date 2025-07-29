#include <stdio.h>

int main()
{
    int i, n, m, occurence = 0;

    printf("Enter the number of Elements in array: ");
    scanf("%d", &n);

    int work[n];

    printf("Enter the array element: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &work[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d", work[i]);
    }

    printf("\nThe number whose frequency you want to find: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        if (work[i] == m)
        {
            occurence++;
        }
    }

    printf("%d Occur %d Times in Work Array", m, occurence);

    return 0;
}
