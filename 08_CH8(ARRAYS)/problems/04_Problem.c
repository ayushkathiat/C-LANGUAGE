#include <Stdio.h>
int main(){
    int arr[10];
    int n = sizeof(arr)/4;
    printf("Enter the number : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int count = 0;
    int sum1 = 0;
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]%2 == 0){
            count++;
            sum += arr[i];
        }
        else{
            count1++;
            sum1 += arr[i];
        }
    }
    printf("Total even no are : %d\n", count);
    printf("The sum of even no is : %d\n", sum);

    printf("Total odd no are : %d\n", count1);
    printf("The sum of odd no is : %d\n", sum1);

    int diff = sum - sum1;
    printf("The diff of even and odd sum is : %d\n", diff);

    return 0;
}