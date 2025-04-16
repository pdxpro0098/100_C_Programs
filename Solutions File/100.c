#include <stdio.h>

int main(){
    char arr[] = {'L','A','T','A',' ','D','A','L','I','P','\0'};

    for(int i = 0; i < sizeof(arr); i++)
    {
        if(arr[i] % 2 != 0){
            printf("%c\n",arr[i]);
        }
    }
    return 0;
}
