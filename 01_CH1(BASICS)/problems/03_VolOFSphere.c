#include <stdio.h>
int main(){
    float r, pi, vol;

    printf("Enter the radius : ");
    scanf("%f", &r);

    pi = 3.14;

    vol = (4.0/3.0)*pi*r*r*r;

    printf("The volume of sphere is : %f", vol);

    return 0;
}


