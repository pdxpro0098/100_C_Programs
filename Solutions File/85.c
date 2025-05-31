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
