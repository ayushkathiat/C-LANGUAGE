#include <stdio.h>
int main(){
    float radius;
    printf("Enter the radius : ");
    scanf("%f", &radius);

    float pi = 3.14;
    float area = pi * radius * radius;

    printf("The ares of circle is : %f\n", area);

    return 0;   
}