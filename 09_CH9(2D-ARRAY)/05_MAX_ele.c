#include <stdio.h>
#include<limits.h>
int main(){
    int arr[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("ENter the ele : ");
            scanf("%d", &arr[i][j]);
        }
    }

    int max = INT_MIN;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(max < arr[i][j]) max = arr[i][j];
        }
    } printf(" MAxm ELE IS : %d", max);


}