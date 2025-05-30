#include <stdio.h>

int main(){
    int size,n,i,j,found = 0;
    int arr[] = {2,4,5,3,6};

    size = sizeof(arr) / sizeof(arr[0]);
    
    printf("Enter the search element: ");
    scanf("%d",&n);

    for(i = 0;i<size;i++){
        if(n == arr[i]){
            found = 1;
            break;
        }
    }

    if(found == 1){
        printf("Value has been found");
    }
    else{
        printf("Not Found");
    }
    return 0;
}
