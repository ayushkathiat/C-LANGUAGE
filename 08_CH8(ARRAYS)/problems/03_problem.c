// COUNT THE NUMBER OF ELE IN GIVEN ARRAY
// GREATER THAN A GIVEN NUMBER X

#include <stdio.h>
int main(){
    int arr[5];
    int n = sizeof(arr)/4;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }   
    int x = 4;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]>x) count++;
    }
    printf("Number greater than 4 : %d", count);
     
    return 0;
}