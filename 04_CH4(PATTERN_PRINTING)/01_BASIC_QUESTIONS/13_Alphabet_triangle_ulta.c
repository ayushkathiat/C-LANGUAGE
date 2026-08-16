#include <stdio.h>
int main(){
    int m, n;
    printf("ENter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n+1-i; j++){
            printf("%c ", (j+64));
        }
        printf("\n");
    }

    return 0;
}