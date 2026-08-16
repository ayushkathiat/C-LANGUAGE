// LOGARITHIM

#include <stdio.h>
int power(int a, int b){
    if(b==0) return 1;
    if(b==1) return a;
    int op = power(a,b/2);
    if(b%2==0){
        return op*op;
    }
    if(b%2!=0){
        return op*op*a;
    }  
}
int main(){
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the power : ");
    scanf("%d", &b);

    int p = power(a, b);
    printf("%d", p);

    return 0;
}
