#include <stdio.h>
int main(){
    int l, b, area, perimeter;

    printf("Enter the length : ");
    scanf("%d", &l);

    printf("Enter the bredth : ");
    scanf("%d", &b);

    area = l * b;
    perimeter = 2 * l * b;

    printf("The area of rectangle is : %d\n", area);
    printf("The perimeter of rectangle is : %d\n", perimeter);

    if(perimeter > area){
        printf("Perimeter is greater than  area");
    }
    else{
        printf("Area is greater than perimeter");
    }

    return 0;
}