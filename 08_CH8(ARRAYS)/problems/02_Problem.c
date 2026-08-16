// GIVEN AN ARTAY OF INTERGER CHANGE THE VALUE OF ALL 
// ODD INDEXED ELE TO ITS SECOND MULTIPLE AND INCREMET 
// ALL EVENN INDEXED VALUE BY 10


// REMENBER QUS IS TALKING ABOUT INDEXES
#include <stdio.h>
int main(){
    int arr[5];
    int n = sizeof(arr)/4;
    printf("Enter the number : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < n; i++){
        if(i%2 == 0){
            arr[i] += 10;
            printf("%d ", arr[i]);
        }
        if(i%2 != 0){
            arr[i] *= 2;
            printf("%d ", arr[i]);
        }
    }
    return 0;
 }
