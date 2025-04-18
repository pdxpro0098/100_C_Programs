#include <stdio.h>

int found(int num1, int num2)
{
    int smallest = num1 < num2 ? num1 : num2;
    int hcf;
    for (int i = 1; i <= smallest; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("%d",hcf);
}

int main()
{
    found(12, 20);
    return 0;
}
