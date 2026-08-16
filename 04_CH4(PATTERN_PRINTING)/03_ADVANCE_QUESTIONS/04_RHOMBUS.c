#include <stdio.h>
int main(){
    int m = 5, n = 8;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n-i; j++){
            printf(" ");
        }
        for(int j = 1; j <= n; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}