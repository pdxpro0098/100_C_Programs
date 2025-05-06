
#include <stdio.h>

int main()
{
    int num = 0;
    int num1 = 1234321;

    int num1_copy = num1;

    while (num1_copy != 0)
    {
        num = num * 10 + num1_copy % 10;
        num1_copy /= 10;
    }
    if (num1 == num)
    {
        printf("Number is palindrome ");
    }
    else
    {
        printf("Number is not palindrome ");
    }

    return 0;
}