// #include <stdio.h>
// int main(){
//     int m = 5, n = 5;

//     for(int i = 1; i<=m; i++){
//         for(int j = 1; j <= n-i; j++){
//             printf("  ");
//         }
//         for(int j = 1; j <= 2*i-1; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

//     return 0;
// } 



// ulta pyramid
#include <stdio.h>
int main(){
    int m = 5, n = 5;

    for(int i = m; i>=1; i--){          
        for(int j = 1; j <= n-i; j++){ // space
            printf("  ");
        }
        for(int j = 1; j <= 2*i-1; j++){  // star
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} 