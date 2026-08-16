// PARAMETERISED (USING TWO PARAMETER)
// #include <Stdio.h>
// void oneton(int x,int n){
//     if(x>n) return;
//     printf("%d\n", x);
//     oneton(x+1, n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);
//     oneton(1,n);
//     return 0;  
// }



// V. V. V. V. IMP
// AFTER RECURSIVE CALL (WITHOUT TWO PARAMETER) 
#include <stdio.h>
void increasing(int n){
    if(n == 0) return;  // base case
    increasing(n-1);    // call
    printf("%d\n", n);  // code
    return;
}
int main(){
    int n;
    printf("Enter the numebr : ");
    scanf("%d", &n);
    increasing(n);
    return 0;
} 
