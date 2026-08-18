// FIND THE SECOND LARGEST EEL IN THE GIVEN ARRAY

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[] = {1, 34, 5, 23, 9, 67, 8};
    int n = sizeof(arr)/4;

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max) max = arr[i];
    } printf("Largest no is : %d", max);
    printf("\n");

    int smax = INT_MIN;
    for(int j = 0; j < n; j++){
        if(arr[j] != max && smax < arr[j]) smax = arr[j];
    } printf("Second largest no is : %d", smax);


    return 0;
}