#include <stdio.h>
int main(){
    int m = 5, n = 5;

    for(int i = 1; i <= m - 4; i++){
        for(int j = 1; j <= 2*n-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    for(int i = m-1; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        for(int j = 1; j <= 2*(n-i)-1; j++){
            printf("  ");
        }
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
