#include <stdio.h>
int main(){
    int m, n, o, p;
    printf("Enter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Enter the number : ");
    scanf("%d", &o);
    printf("Enter the number : ");
    scanf("%d", &p);

    for(int i = 1; i <= m; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int a = 1; a <= n; a++){
        for(int b = 1; b <= n + 1 - a; b++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int c = 1; c <= o; c++){
        for(int e = 1; e <= o-e; e++){
            printf("  ");
        }
        for(int d = 1; d <= c; d++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    for(int f = 1; f <= p; f++){
        for(int g = 1; g <= f; g++){
            printf("  ");
        }
        for(int h = 1; h <= p - f ; h++){
            printf("* ");
        }
        printf("\n");
    }


    return 0;
}


