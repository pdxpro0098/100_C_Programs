#include <stdio.h>

void printSum(int a,int b);

int main(){
    int a,b;
    printSum(23,5);
    return 0;
}

void printSum(int a,int b){
    printf("The sum of %d & %d is %d",a,b,a+b);
}
