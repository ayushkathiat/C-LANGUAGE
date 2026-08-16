// TAKE INTEGAR X AS INPUT AND PRINT HALF OF THE NUMBER 

#include <stdio.h>
int main(){
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);

    float f = (float)x;
    printf("%f", f/2);

    return 0;
}