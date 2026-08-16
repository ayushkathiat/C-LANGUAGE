#include <stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    if(x >= 0){
        printf("Absolute value is : %d", x);
    }
    if(x < 0){
        printf("Absolute value is : %d", -x);
    }

    return 0;
}