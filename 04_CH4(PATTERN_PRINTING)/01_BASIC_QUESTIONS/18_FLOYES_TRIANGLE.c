#include <stdio.h>
int main(){
    int m, n;
    printf("ENter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}


// FLOYES SQUARE
#include <stdio.h>
int main(){
    int m, n;
    printf("ENter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}


// FLOYES triangle ulta
#include <stdio.h>
int main(){
    int m, n;
    printf("ENter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    int a = 1;
    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= n+1-i; j++){
            printf("%d ", a++);
        }
        printf("\n");
    }

    return 0;
}


