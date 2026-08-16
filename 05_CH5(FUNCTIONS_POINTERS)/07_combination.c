#include <stdio.h>
int fact(int x){
    int f = 1;
    for(int i = 1; i <= x; i++){
        f *= i;
    }return f;

}
int main(){
    int n, r;
    printf("Enter the value of n : ");
    scanf("%d", &n);

    printf("Enter the value of r : ");
    scanf("%d", &r);

    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);

    printf("The combination will be : %d", a/(b*c));

    return 0;
}
