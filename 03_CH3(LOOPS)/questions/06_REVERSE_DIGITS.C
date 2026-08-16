#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int r = 0;
    while(n>0){
        int lastdigit = n % 10;
        r *= 10;
        r += lastdigit;
        n /= 10;
    }
    printf("The number in reverse is : %d\n", r);

    return 0;
}
