#include <stdio.h>

int main()
{
    int sub_1, sub_2, sub_3, sub_4, sub_5;
    printf("Enter 5 marks: ");
    scanf("%d %d %d %d %d", &sub_1, &sub_2, &sub_3, &sub_4, &sub_5);

    float percent = (sub_1 + sub_2 + sub_3 + sub_4 + sub_5) / 5.0;

    if (percent <= 100 && percent >= 0)
    {
        if (percent >= 80)
        {
            printf("A");
        }
        else if (percent >= 60)
        {
            printf("B");
        }
        else if (percent >= 40)
        {
            printf("C");
        }
        else if (percent >= 30)
        {
            printf("D");
        }
        else
        {
            printf("F");
        }
    }
    else
    {
        printf("Invalid marks");
    }

    return 0;
}