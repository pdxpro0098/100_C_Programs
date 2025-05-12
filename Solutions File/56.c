#include <stdio.h>
int main()
{
    int userNum = 153;
    int sum = 0;
    int power = 0;
    int lastDigit;
    int numCopy = userNum;
    int numCopy2 = userNum;

    while (numCopy != 0)
    {
        power++;
        numCopy /= 10;
    }

    while (numCopy2 != 0)
    {
        lastDigit = numCopy2 % 10;
        int ldPower = 1;
        for (int i = 0; i < power; i++)
        {
            ldPower *= lastDigit;
        }
        sum += ldPower;
        numCopy2 /= 10;
    }

    if (userNum == sum)
    {
        printf("Entered number is armstrong %d \n", userNum);
    }
    return 0;
}
