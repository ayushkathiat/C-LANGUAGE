// PART OF BREAK

#include <stdio.h>
#include <stdbool.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    bool flag = true;   // 1 means prime
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            flag = false;  // 0 means composite
            break;
        }
    }
    if(n == 1) printf("%d is neither prime nor composite", n);
    else if(flag == true) printf("%d is prime", n);
    else printf("%d is composite ", n);

    return 0;
} 