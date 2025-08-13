#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);

    double result = round(num);
    printf("Rounded number: %.0f\n", result);

    return 0;
}
