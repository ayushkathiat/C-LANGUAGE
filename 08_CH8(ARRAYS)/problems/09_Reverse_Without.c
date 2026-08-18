// mWACP TO REVERSE THE RRAY WITHOUT USING ANY EXTRA ARRAY

#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr)/4;

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int i = 0;
    int j = n-1;
    while(i<j){
        // swap(arr[i], arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
  
    return 0;
}