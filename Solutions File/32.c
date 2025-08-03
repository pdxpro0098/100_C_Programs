// Krish's Approach
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


// Dalip's Approach
#include <stdio.h>

int findOccurence(int work[],int length, int n)
{
    int count = 0;
    
    for (int i = 0; i < length; i++)
    {
        if (n != work[i])
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    int work[] = {4, 6, 2, 8, 4, 8, 7, 8};
    int length = sizeof(work)/sizeof(work[1]);
    int m;
    printf("Enter the number: ");
    scanf("%d",&m);
    
    printf("Appear %d times",findOccurence(work,length,m));

    return 0;
}
