#include <stdio.h>
#include <limits.h>
int main(){
    int arr[] = {12, 34, 57, 8, 234, 456};
    int n = sizeof(arr)/4;

    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(min>arr[i]) min = arr[i];
    }
    printf("%d", min);

    return 0;
}
 