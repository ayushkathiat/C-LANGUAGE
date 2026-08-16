// TAKE POSITIVE INTEGER INPUT AND TELL IF IT IS DIVISIBLE BY 5 OR 3 BUT NOT DIVISIBLE BY 15

#include <stdio.h>
int main(){
    int x;

    printf("Enter the numebr : ");
    scanf("%d", &x);

    if(x%15 != 0 || (x%5 == 0 && x%3 == 0)){
        printf("number is divisible by 5 and 3 but not by 15");
    }
    else{
        printf("Not divisible");
    }

    return 0;

}
