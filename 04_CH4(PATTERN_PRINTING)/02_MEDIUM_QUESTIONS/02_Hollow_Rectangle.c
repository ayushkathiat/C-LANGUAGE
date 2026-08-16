#include <stdio.h>
int main(){
    int m, n;
    m = 4, n = 6;

    for(int i = 1; i<=m; i++){
        for(int j = 1; j<=n; j++){
            if(i == 1 || i == 4 || j == 1 || j == 6) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}