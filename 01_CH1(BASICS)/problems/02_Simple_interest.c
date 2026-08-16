#include <stdio.h>
int main(){
    float p,r,i, si;

    printf("Enter the principle amount : ");
    scanf("%f",&p);

    printf("Enter the rate : ");
    scanf("%f",&r);

    printf("Enter the interest : ");
    scanf("%f",&i);

    si = (p*r*i)/100;

    printf("The simple interest is : %f", si);

    return 0;
}