// Krish's Approach
#include <stdio.h>

int main()
{
    int num = 234;
    int binary = 2;
    while (num > 0)
    {

        int r = num % 2;
        binary = binary * 10 + r;

        num /= 2;
    }

    while (binary > 0 && binary != 2)
    {
        printf("%d", binary % 10);
        binary /= 10;
    }

    return 0;
}

// Dalip's Approach
#include <stdio.h>

int main(){
    int num,j,i,binary[45];
    i = 0;
    num = 3;

    while(num>0){
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Decimal to Binary:\n");
    printf("Decimal = %d\n",num);
    printf("Binary = ");
    for(j = i-1;j>=0;j--){
        printf("%d",binary[j]);
    }

    return 0;
}

