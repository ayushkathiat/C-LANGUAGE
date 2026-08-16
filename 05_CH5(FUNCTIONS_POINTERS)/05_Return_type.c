#include <stdio.h>
int min(int x, int y){     // return type
    if(x<y) return x;
    else return y;
}
int main(){
    int a, b;
    printf("Enter the number : ");
    scanf("%d", &a);
    printf("Enter the number : ");
    scanf("%d", &b);

    int m = min(a, b);
    printf("The min of %d and %d is : %d", a, b, m);

    return 0;
}