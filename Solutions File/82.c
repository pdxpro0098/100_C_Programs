#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumber(){
    return rand() % 10;
}

int main(){
    int arr[7]= {0};
    int c,i,j;
    int length = sizeof(arr) / sizeof(arr[1]);

    srand(time(NULL));

    for(int i = 0;i<length;i++){
        arr[i] += randomNumber();
    }

    printf("Original Array:\n");
    for(int i = 0;i<length;i++){
        printf("%d ",arr[i]);
    }
    
    for(i = 0;i<length;i++){
        for(j = i+1;j<length;j++){
            if(arr[i]>arr[j]){
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    
    printf("\n");
    printf("Sorted Array:\n");
    for(int i = 0;i<length;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
