#include <stdio.h>
int main(){
    int n= 5;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n-1; j++){
            printf("%d ", j);
        }
    }

    return 0;
}