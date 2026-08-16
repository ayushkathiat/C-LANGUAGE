#include <Stdio.h>
int main(){
    int m, n;
    m = 5, n = 5;

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(i == 3 || j == 3) printf("* ");
            else printf("  ");
        }
        printf("\n");
    }


    return 0;
}