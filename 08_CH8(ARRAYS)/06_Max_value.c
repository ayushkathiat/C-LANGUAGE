#include <stdio.h>
#include <limits.h>
int main(){
    int arr[] = {112, 3, 46, 23, 25};
    int n = sizeof(arr)/4;

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(max<arr[i]) max = arr[i];
    }printf("%d\n", max);

    return 0;
}  