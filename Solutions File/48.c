
#include <stdio.h>

int sum(int a,int b);
int prod(int a,int b);

int main(){
    int user,result;
    printf("1 For SUM\n2 For Product:-\n");
    printf("Enter the number: ");
    scanf("%d",&user);

    switch (user)
    {
    case 1:
        result = sum(2,5);
        printf("The sum is %d",result);
        break;
    case 2:
        result = prod(2,5);
        printf("The product is %d",result);
        break;
    default:
        printf("Wrong Code!");
        break;
    }

    return 0;
}

int sum(int a,int b){
    return a + b;
}
int prod(int a,int b){
    return a * b;
}
