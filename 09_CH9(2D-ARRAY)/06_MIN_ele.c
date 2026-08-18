#include <Stdio.h>
#include<limits.h>
int main(){
    int arr[3][3] = {12, 2,4, 24 ,13, 3, 13, 8, 12};

    int min = INT_MAX;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(min > arr[i][j]) min = arr[i][j];

        }
    }
    printf(" MIN ELE IS : %d", min);

    return 0;
}