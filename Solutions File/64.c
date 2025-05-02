#include <stdio.h>
#define LCM(a, b) ((a * b) / hfc(a, b))
#define SMALLER(a, b) (a < b ? a : b)

int HCF(int a, int b)
{
    for (int i = SMALLER(a, b); i > 1; i--)
        if (a % i == 0 && b % i == 0)
            return i;
    return 1;
};

int main()
{
    int a = 12, b = 18;

    printf("%d", HCF(a, b));

    return 0;
}