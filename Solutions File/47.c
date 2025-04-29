#include <stdio.h>

int main()
{
    int a, b, result;

    a = 5;
    b = 7;

    // result = b >= 7;
    // result = b == a;
    // result = a < b;
    result = a != b;
    // result = a <= 5;
    // result = 3 > 5;
    printf("%d", result);
    return 0;
}
