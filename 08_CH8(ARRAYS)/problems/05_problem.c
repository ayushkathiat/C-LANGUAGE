// WACP TO STORE N ELE IN 1D ARRAY THE COUNT AND PRINT TOTAL EVEN AND ODD ELE IN THE ARRAY

#include <Stdio.h>
int main(){
    int arr[10];
    int n = sizeof(arr)/4;
    printf("Enter the number : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            count++;
        }
        else{
            count1++;
        }
    }
    printf("Total even no are : %d\n", count);
    printf("Total odd no are : %d\n", count1);

    return 0;
}