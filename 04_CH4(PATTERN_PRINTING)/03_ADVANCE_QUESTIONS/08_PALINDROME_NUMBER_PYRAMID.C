#include <stdio.h>
int main(){
    int m = 5, n = 5;

    for(int i = 1; i <= m; i++){
       
        for(int j = 1; j <= n-i; j++){  // for spaces
            printf("  ");
        }
        for(int j = 1; j <= i; j++){  // number triangle
            printf("%d ", j);
        }
        int a = i -1;
        for(int k = 1; k <= i-1; k++){   // extra chiz 
            printf("%d ", a);
            a--;
        }
        printf("\n");
    }

    return 0;
}