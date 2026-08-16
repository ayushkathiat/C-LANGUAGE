#include <stdio.h>
int main(){
    int m = 5, n= 5;

    // UPPER HALF
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n-i; j++){
            printf("  ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    // LOWER HALF
     for(int i = m - 1; i >= 1; i--){
        for(int j = 1; j <= n-i; j++){
            printf("  ");
        }
        for(int j = 1; j <= 2*i-1; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0; 
}






 