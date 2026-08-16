#include <stdio.h>
int main(){
    float pi = 3.14, r, SA;

    printf("Enter the radius : ");
    scanf("%f", &r);

    SA = 4*pi*r*r;

    printf("The surface area is : %f", SA);

    return 0;
}
