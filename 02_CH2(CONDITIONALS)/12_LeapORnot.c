// LEAP YEAR OCCURS AFTER EVERY 4 YEAR
// ANY YEAR DIVISIBLE BY 100 IS NOT A LEAP YEAR
// ANY YEAR DIVISIBLE BY 400 IS 100% LEAP YEAR

#include <stdio.h>
int main(){
    int x;

    printf("Enter a year : ");
    scanf("%d", &x);

    if(x%400 == 0 || (x%4 == 0 && x%100 != 0)){
        printf("This is the leap year");
    }else{
        printf("NOt a leap year");
    }

    return 0;
}