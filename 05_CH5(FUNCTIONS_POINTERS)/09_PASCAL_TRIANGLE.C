#include <stdio.h>
int fact(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }return fact;
}
int ncr(int n, int r){
    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);
    return a/(b*c);
}
int main(){
    int m, n;
    printf("Enter num : ");
    scanf("%d", &m);
    printf("Enter num : ");
    scanf("%d", &n);

    for(int i = 0; i <= m; i++){
        for(int j = 1; j <= m-i; j++){
            printf("  ");
        }
        for(int j = 0; j <= i; j++){
            printf("%d ", ncr(i, j));
        }
        printf("\n");
    }
    return 0;
}   