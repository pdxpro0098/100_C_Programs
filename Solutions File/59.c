#include <stdio.h>

int main(){
    int a,b=12;

    for(a = 1;a<b;a++){
        if(a == 5 || a == 9){
            continue;
        }
            if(a == 10){
                break;
            }
        printf("%d",a);
    }

    return 0;
}
