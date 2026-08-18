#include <stdio.h>
int main(){
    int arr1[3][3], arr2[3][3], arr3[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("ENter the ele in 1nd matrix : ");
            scanf("%d", &arr1[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("ENter the ele in 2st matrix : ");
            scanf("%d", &arr2[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
             printf("%d ", arr3[i][j]);
        }printf("\n");
    }

    return 0;
}
