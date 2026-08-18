// WAP TO PRINT THE TRANSPOSE OF THE MATRIX ENTERED BY THE USER

#include <stdio.h>
int main(){
    int arr[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Enter the ele : ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", arr[j][i]);
        }printf("\n");
    }
    
    return 0;
}