// GIVEN AN INTEGER N. CREATE AN ARRAY CONTAINING SQUARES OF ALL NATURAL
// NUMBER TILL N AND PRINT THE ELE OF THE ARRAY

#include <stdio.h>
int main(){
    int arr[5];
    int n = sizeof(arr)/4;
    printf("Enter the number : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}