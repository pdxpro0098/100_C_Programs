#include <stdio.h>

int main()
{
    int num = 234;
    int binary = 2;
    while (num > 0)
    {

        int r = num % 2;
        binary = binary * 10 + r;

        num /= 2;
    }

    while (binary > 0 && binary != 2)
    {
        printf("%d", binary % 10);
        binary /= 10;
    }

    return 0;
}