//Dalip
#include <stdio.h>
            
int main()
    {
    int i, j, k = 0;
    int ar[] = {2, 4, 5, 7, 3, 9};

    for (i = 0, j = 5; i < 6 / 2; i++, j--)
    {
        ar[i] = ar[i] + ar[j];
        ar[j] = ar[i] - ar[j];
        ar[i] = ar[i] - ar[j];
    }
    for (k = 0; k < 6; k++)
    {
        printf("%d", ar[k]);
    }

    return 0;
}
// krish
#include <stdio.h>
#include <string.h>
#define size 11

int main()
{

    char str[size] = "krish dalip";
    for (int i = 0; i <= size; i++)
    {
        printf("%c", str[size-i]);
    }

    return 0;
}
