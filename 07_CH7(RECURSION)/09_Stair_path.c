// #include <Stdio.h>
// int stair(int n){
//     if(n == 1 || n == 2) return n;
//     return stair(n-1) + stair(n-2);
//     }
// int main(){
//     int n;
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     int ways = stair(n);
//     printf("%d", ways);

//     return 0;
// }


// if one two and three ways
#include <Stdio.h>
int stair(int n){
    if(n == 1 || n == 2 || n == 3) return n;
    return stair(n-1) + stair(n-2) + stair(n-3);
    }
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n); 

    int ways = stair(n);
    printf("%d", ways);

    return 0;
}