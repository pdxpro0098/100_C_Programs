#include <stdio.h>

int main()
{
    int sum = 0, num;

    printf("Enter the number: ");
    scanf("%d", &num);

    for (num; num > 0; num /= 10)
    {
        sum += num % 10;
    }
    printf("%d", sum);

    return 0;
}
