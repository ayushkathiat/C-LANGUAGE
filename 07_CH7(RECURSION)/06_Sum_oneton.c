// #include <stdio.h>
// void sum(int n, int s){
//     if(n == 0) {
//         printf("%d\n",  s);
//         return;
//     }
//     sum(n-1, s+n);
//     return;
// }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     sum(n, 0);

//     return 0;
// }




// USING RETURN TYPE
#include <Stdio.h>
int sum(int n){
    if(n == 0 || n == 1) {
        return 0;
    }
    int op = n + sum(n-1);
    return op;

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int total = sum(n);
    printf("%d", total);
 
    return 0;
}
