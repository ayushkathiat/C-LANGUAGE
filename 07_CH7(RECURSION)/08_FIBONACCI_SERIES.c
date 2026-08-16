// 1 1 2 3 5 8 13 21 34 55 89 
// 1 2 3 4 5 6  7  8  9 10 11 
// fibo(n) = fibo(n-1) + fibo(n-2)

#include <stdio.h>
int fibo(int n){
    if(n == 1 || n == 2) return 1;
    return fibo(n-1) + fibo(n-2);
}
int main(){
    int n;
    printf("ENter the number : ");
    scanf("%d", &n);

    int f = fibo(n);
    printf("%d", f);

    return 0;
} 
