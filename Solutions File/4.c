#include <stdio.h>
int main()
{
    char input;
    while (1)
    {
        printf("Enter day number (1-7) or 'q' to quit:\n");
        scanf(" %c", &input);
        switch (input)
        {
        case '1':
            printf("Sunday\n");
            break;
        case '2':
            printf("Monday\n");
            break;
        case '3':
            printf("Tuesday\n");
            break;
        case '4':
            printf("Wednesday\n");
            break;
        case '5':
            printf("Thursday\n");
            break;
        case '6':
            printf("Friday\n");
            break;
        case '7':
            printf("Saturday\n");
            break;
        case 'q':
            printf("Exiting program.\n");
            return 0;
        default:
            printf("Invalid input. Please enter a number between 1 and 7 or 'q' to quit.\n");
            break;
        }
    }

    return 0;
}
