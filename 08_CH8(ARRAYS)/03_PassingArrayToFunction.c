// ARRAY IS PASS BY REFERENCE
#include <stdio.h>
void change(int x[], int n){
    printf("%d\n", n);
    x[2] = 10;
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/4;
    printf("%d\n", n);

    printf("%d\n", arr[2]);

    change(arr, n);

    printf("%d\n", arr[2]);
    return 0;
}