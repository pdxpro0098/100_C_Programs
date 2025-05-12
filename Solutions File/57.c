// 57. Program to input a number and print its even factors.
#include <stdio.h>

int main()
{
    int num = 18;
    printf("Even factors of %d : ", num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0 && i % 2 == 0)
        {
            printf("%d ", i);
        }
    }

    return 0;
}