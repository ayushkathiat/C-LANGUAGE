#include <stdio.h>
int power(int a, int b){
    if(b == 0){
        return 1;
    }
    int op = a*power(a,b-1);
    return op;

}
int main(){
    int a, b;
    printf("Enter the base : ");
    scanf("%d", &a);
    printf("Enter the power : ");
    scanf("%d", &b);

    int pow = power(a, b);
    printf("%d rage to the power %d is %d",a, b, pow);

    return 0;
}