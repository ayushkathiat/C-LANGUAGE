#include <stdio.h>
int main(){

    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    if(x%2 != 0){
        printf("This is an odd number ");
    }if(x%2 == 0){
        printf("This is an even number ");
    }else{
        printf("number is zero");
    }

    return 0;
}

