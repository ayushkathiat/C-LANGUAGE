#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the rows : ");
    scanf("%d", &a);

    printf("Enter the columns : ");
    scanf("%d", &b);


    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

