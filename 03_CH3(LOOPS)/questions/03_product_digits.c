#include <stdio.h>
int main(){
    int n;
    printf("ENter the number : ");
    scanf("%d", &n);

    int product = 1;
    while(n>0){
        int lastdigit = n % 10;
        n /= 10;
        product = lastdigit * product;
    }
    printf("The product of the number is : %d", product);

    return 0;
}