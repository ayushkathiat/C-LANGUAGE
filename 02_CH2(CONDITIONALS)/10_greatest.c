// ONLY WORK FOR DISTINCT PRODUCTS

#include <stdio.h>
int main(){
    int x, y, z;

    printf("Enter the 1st number : ");
    scanf("%d", &x);

    printf("Enter the 2nd number : ");
    scanf("%d", &y);

    printf("Enter the 3rd number : ");
    scanf("%d", &z);

    if(x >= y && x >= z){
        printf("The greatest number is %d\n", x);
    }
    else if(y >= x && y >= z){
        printf("The greatest number is %d\n", y);
    }
    else if(z >= y && z >= x){
        printf("The greatest number is %d\n", z);
    }
    else{
        printf("NOt a grestest number ");
    }

    return 0;
}
