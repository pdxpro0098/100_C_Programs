#include <stdio.h>

float add(float x, float y)
{

    return x + y;
}

float sub(float x, float y)
{

    return x - y;
}

float multiply(float x, float y)
{

    return x * y;
}

float divide(float x, float y)
{
    return x / y;
}

int main()
{
    printf("Select operation:");
    printf("1. Add");
    printf("2. Subtract");
    printf("3. Multiply");
    printf("4. Divide");

    char choice = input("Enter choice (1/2/3/4): ");
    scanf("%c", &choice);
    float num1;
    scanf("%d", &num1);
    float num2;
    scanf("%d", &num2);

    if (choice == '1')
    {
        printf("%d + %d = %d", num1, num2, add(num1, num2));
    }
    else if (choice == '2')
    {
        printf("%d - %d = %d", num1, num2, sub(num1, num2));
    }
    else if (choice == '3')
    {
        printf("%d X %d = %d", num1, num2, multiply(num1, num2));
    }
    else if (choice == '4')
    {
        printf("%d / %d = %d", num1, num2, divide(num1, num2));
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
