#include <stdio.h>

int main(){
    int n,c,reversed = 0;
    printf("Enter the number(max-3 digits): ");
    scanf("%d",&n);

    while(n>0){
        reversed = (reversed*10) + (n % 10);
        n /= 10;
    }

    while(reversed>0){
        c = reversed % 10;
        if(c % 2 == 0){
            printf("Even: %d\n",c);
        }
        else{
            printf("Odd: %d\n",c);
        }
        reversed /= 10;
    }
    
    return 0;
}
