// WAP TO STORE ROLL BUM AND MARKS OBTAINED BY 4 STUDENTS SIDE 
// BY  SIDE IN A MATRIX

#include <stdio.h>
int main(){
    int arr[4][2] = {{8, 90}, {12, 23}, {34, 56}, {34, 79}};
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 2; j++){
            printf("%d ", arr[i][j]);
         }printf("\n");
    }
    printf("\n");
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
         }printf("\n");
    }

    return 0;
} 