#include <stdio.h>
int main(){
    int x;

    printf("Enter the number : ");
    scanf("%d", &x);

    // NESTED IF ELSE
    if(x%5 == 0){
        if(x%3 == 0) printf("This number is divisible by 3 and 5");
        else printf("not divisible by 5 and 3");
    }
    else{
        printf("This number is not divisible by 3 and 5");
    }

    return 0;
}

