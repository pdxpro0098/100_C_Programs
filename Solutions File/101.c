#include <stdio.h>

int main()
{
    int n = 4557, c;

    Using For loop
    for (n; n > 0; n /= 10) //n /= 10 Reducing n
    {
        c = n % 10; // Get last digit 
        printf("%d", c);
    }

    // Using While loop:-
    while (n > 0) 
    {
        c = n % 10; // Get last digit 
        printf("%d", c);
        n /= 10; // Reducing n
    }

    // Do While loop:-
    do
    {
        c = n % 10; // Get last digit 
        printf("%d", c);
        n /= 10; // Reducing n
    } while (n > 0);

    return 0;
}
