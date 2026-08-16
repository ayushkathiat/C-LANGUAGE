#include <stdio.h>
int main(){
    int arr[] = {1, 12, 23, 34, 21};
    arr[0] = 10;
    for(int i = 0; i < 5; i++){
        printf("%d\n", arr[i]);

    }
    return 0;
}      