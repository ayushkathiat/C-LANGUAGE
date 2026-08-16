#include <stdio.h>
int main(){
    int x,y;
    char ch;

    printf("Enter the 1st number : ");
    scanf("%d", &x);

    printf("Enter the 2nd number : ");
    scanf("%d", &y);

    printf("Enter the operator : ");
    scanf(" %c", &ch);

    switch(ch){
        case '+' :
           printf("The sum of %d and %d is : %d\n", x, y, x + y);
           break;
        case '-' :
           printf("The subtraction of %d and %d is : %d\n", x, y, x - y);
           break;
        case '*' :
           printf("The multiplication of %d and %d is : %d\n", x, y, x * y);
           break;
        case '/' :
           printf("The division of %d and %d is : %d\n", x, y, x / y);
           break;
        default:
           printf("Invalid operator\n");
    }

    return 0;
}

