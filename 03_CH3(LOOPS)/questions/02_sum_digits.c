// WAP TO print sum of DIGITS OF A GIVEN NUMBER 

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int sum = 0 ;
    while(n>0){
        int lastdigit = n % 10;
        n /= 10;
        sum = lastdigit + sum;
    }
    printf("No of digits is : %d", sum);

    return 0;
}