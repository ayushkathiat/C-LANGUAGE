#include <stdio.h>
int fact(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }return fact;

}
int main(){
    int n, r;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    printf("Enter the value of r : ");
    scanf("%d", &r);

    int a = fact(n);
    int c = fact(n-r);

    printf("The permutation will be : %d", a/c);

    return 0;
}