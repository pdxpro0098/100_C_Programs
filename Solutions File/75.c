#include <stdio.h>

int main()
{

    int a = 5, b = 9;

    printf("a&b = %u\n", a & b);

    printf("a|b = %u\n", a | b);

    printf("a^b = %u\n", a ^ b);

    printf("~a = %u\n", a = ~a);

    printf("b<<1 = %u\n", b << 1);

    printf("b>>1 = %u\n", b >> 1);
    return 0;
}