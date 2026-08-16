#include <stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    if(x > 99 && x < 999){
        printf("This is a 3 digit number");
    }
    else{
        printf("This is not a 3 digit number");
    }

    return 0;
}