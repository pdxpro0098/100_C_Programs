#include <stdio.h>

int main()
{
    int first = 0;
    int second = 1;
    int third;
    for (int i = 0; i <= 10; i++)
    {
        printf("%d ", first);
        third = first + second;
        first = second;
        second = third;
    }

    return 0;
}