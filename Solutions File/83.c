#include <stdio.h>

double add(double x, double y)
{
    return x + y;
}

double sub(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{

    return x * y;
}

double divide(double x, double y)
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

    char choice = input("Enter choice (1/2/3/4): \n");
    scanf("%c", &choice);
    double num1;
    scanf("%f", &num1);
    double num2;
    scanf("%f", &num2);

    if (choice == '1')
    {
        printf("%f + %f = %f", num1, num2, add(num1, num2));
    }
    else if (choice == '2')
    {
        printf("%f - %f = %f", num1, num2, sub(num1, num2));
    }
    else if (choice == '3')
    {
        printf("%f X %f = %f", num1, num2, multiply(num1, num2));
    }
    else if (choice == '4')
    {
        printf("%f / %f = %f", num1, num2, divide(num1, num2));
    }
    else
    {
        printf("Invalid input");
    }

    return 0;
}
