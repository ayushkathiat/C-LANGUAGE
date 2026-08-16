#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a;
    printf("Enter the number : ");
    scanf("%d", &a);

    float root = sqrt(n);
    printf("The square root of num is : %.2f\n", root);

    int power = pow(n, a);
    printf("The power of num is : %d\n", power);

    float cube = cbrt(n);
    printf("The cube root of num is : %.2f\n", cube);

    return 0;

}