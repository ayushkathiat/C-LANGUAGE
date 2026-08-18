// FIND THE PRODUCT OF ALL ELE IN A MATRIX

#include <stdio.h>
int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int Product = 1;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            Product *= arr[i][j];
        }
    }

    printf("PRODUCT OF ELE IS : %d", Product);

    return 0;
}