#include <stdio.h>
int max = 2147483647;

int len(int num)
{
    int len = 0;
    while (num != 0)
    {
        len++;
        num /= 10;
    }
    return len;
}

int printSmallest(int arr[], int size)
{
    int smallest = arr[0];
    int idx = 0;
    for (int i = 0; i < size; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
            idx = i;
        }
    }
    printf("%d ", smallest);
    return idx;
}

void separatingNumber(int arr[], int num)
{
    int i = 0;

    while (num != 0)
    {
        arr[i] = num % 10;
        num /= 10;
        i++;
    }
}
void eliminateSmallest(int arr[], int idx)
{
    arr[idx] = max;
}

int main()
{
    int num = 94526;
    printf("Enter number:\n");
    scanf("%d", &num);
    int size = len(num);

    int arr[size];
    separatingNumber(arr, num);
    for (int i = 0; i < size; i++)
    {
        eliminateSmallest(arr, printSmallest(arr, size));
    }
}