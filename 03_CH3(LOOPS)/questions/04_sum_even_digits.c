#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int sum = 0;
    while(n>0){
        int lastdigit = n % 10; 
        if(n%2 == 0) sum = lastdigit + sum;
        n /= 10;
        
    }
    printf("The sum of even digits is : %d", sum);

    return 0;
}
