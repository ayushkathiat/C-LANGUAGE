#include <stdio.h>
int main(){
    int m = 4, n = 4;

    for(int i = 1; i <= m; i++){         
        for(int j = 1; j <= n-i; j++){    
            printf("  ");
        }
        for(int j = 1; j <= i; j++){     
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}