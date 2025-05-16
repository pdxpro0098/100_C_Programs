#include <stdio.h>
#include <math.h>

// Length Function Prototype
int len(int num); 

int main()
{
    int num, length, temp, digit, sum = 1; // Variables Initialization

    printf("Enter the num: ");
    scanf("%d", &num); // Taking input in num

    length = len(num); // Using len function to know the length of num

    temp = num; // storing original value of num in temp

    while (temp > 0) //It'll run until temp becomes 0
    {
        digit = temp % 10; //Fetching last digit
        sum += (int)pow(digit, length); //Cube of each value then adding them into sum
        temp /= 10; //Reducing temp
    }
    
    if(num == sum){   // Checking num is equal to sum or not?
        printf("%d is Armstrong",num);
    }
    else{
        printf("%d is not Armstrong",num);
    }
    return 0;
}

// Length Function Definition
int len(int num)
{
    int len = 0;
    for (; num > 0; num /= 10)
    {
        len++;
    }

    return len;
}
