// GIVEN A MATRIX 'a' OF DIMENSION N X M AND 2 COORDINATES
// (I1, r1) AND (I2, r2). RETURN THE SUM OF THE 
// RECTANGLE FROM (i1, r1) TO (i2, r2)

#include <stdio.h>
int main(){
    int arr[5][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    int sum = 0;
    for(int i = 0; i <= 3; i++){
        for(int j = 1; j <= 2; j++){
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
        }printf("\n");
    }

    printf("SUm of eles is : %d", sum);
    return 0;
}