#include <Stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    int r = 0;
    while(n > 0){
        int lastdigit = n % 10;
        r *= 10;
        r += lastdigit;
        n /= 10;
        sum = lastdigit + sum;
    }
    printf("Reverse order of number : %d\n", r);
    printf("Sum of digits is : %d", sum);

    return 0;
}