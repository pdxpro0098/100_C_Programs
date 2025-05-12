#include <stdio.h>
int len(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int main()
{
    int num = 5234;
    int sum = 0;
    int fd;
    int ld = num % 10;
    for (int i = 0; i <= len(num); i++)
    {
        num /= 10;
    }
    fd = num;

    sum += fd + ld;
    printf("%d", sum);

    return 0;
}