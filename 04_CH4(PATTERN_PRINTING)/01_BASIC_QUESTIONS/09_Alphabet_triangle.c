#include <stdio.h>
int main(){
    int m, n;
    printf("Enter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("%c ", (j+64));
        }
        printf("\n");
    }

    return 0;
}