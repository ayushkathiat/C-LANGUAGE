#include <stdio.h>
int main(){
    int a,b,c;

    printf("Enter the 1st side : ");
    scanf("%d", &a);

    printf("Enter the 2nd side : ");
    scanf("%d", &b);

    printf("Enter the 3rd side : ");
    scanf("%d", &c);

    if(a+b > c && b+c > a && a+c > b){
        printf("This is the perfect triangle");
    }
    else{
        printf("Not a perfect triangle");
    }

    return 0;
}

