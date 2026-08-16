#include <stdio.h>
int main(){
    int m, n;
    printf("Enter the numnber : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n+1-i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}