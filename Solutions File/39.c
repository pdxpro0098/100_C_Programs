#include <stdio.h>

int main()
{
    int a = 6;
    int b = 22 / 7;

    // Implicit Conversion
    printf("%f\n", (float)a);

    // Automatic Conversion
    printf("%d\n", b);

    return 0;
}