#include <stdio.h>
int main(){
    int m = 5, n = 5;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(i == j || i == n+1-j) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
