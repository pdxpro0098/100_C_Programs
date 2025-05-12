#include <stdio.h>

int main()
{

    float sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += 2.0 / i;
    }
    printf("%0.2f", sum);

    return 0;
}