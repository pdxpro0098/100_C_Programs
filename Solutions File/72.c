
#include <stdio.h>

void printIncrementLoop(int a,int b);
void printDecrementLoop(int a,int b);

int main(){
    int a,b;
    printDecrementLoop(35,26);

    return 0;
}

void printIncrementLoop(int a,int b){
    for(a;a<=b;a++){
        printf("%d",a);
    }
}

void printDecrementLoop(int b,int a){
    for(b;b>=a;b--){
        printf("%d\n",b);
    }
}

