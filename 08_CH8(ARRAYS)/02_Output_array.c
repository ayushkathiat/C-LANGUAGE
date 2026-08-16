#include <stdio.h>
int main(){
    int arr[10];
    int n = sizeof(arr)/4;
    printf("ENter the number : ");
    for(int i = 0; i < n; i++){  //input
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){  //output
        printf("%d ", arr[i]);
    }

    return 0;
}