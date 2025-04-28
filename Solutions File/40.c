#include <stdio.h>

int main(){
    int user;
    printf("Enter you Age: ");
    scanf("%d",&user);

    if(user < 18){
        printf("Not Adult");
    }
    else{
        printf("Adult");
    }

    return 0;
}