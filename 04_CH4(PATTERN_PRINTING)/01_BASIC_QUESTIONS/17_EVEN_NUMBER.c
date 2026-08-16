// #include <stdio.h>
// int main(){
//     int m, n;
//     printf("ENter the number : ");
//     scanf("%d", &m);
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for(int i = 1; i <= m; i++){
//         int a = 2;
//         for(int j = 1; j <= n; j++){
//             printf("%d ", a);
//             a = a + 2;
//         }
//         printf("\n");
//     }

//     return 0;
// }


// star triangle
// #include <stdio.h>
// int main(){
//     int m, n;
//     printf("ENter the number : ");
//     scanf("%d", &m);
//     printf("Enter the number : ");
//     scanf("%d", &n);

//     for(int i = 1; i <= m; i++){
//         int a = 2;
//         for(int j = 1; j <= i; j++){
//             printf("%d ", a);
//             a = a + 2;
//         }
//         printf("\n");
//     }

//     return 0;
// }



// star triangle ulta
#include <stdio.h>
int main(){
    int m, n;
    printf("ENter the number : ");
    scanf("%d", &m);
    printf("Enter the number : ");
    scanf("%d", &n);

    for(int i = 1; i <= m; i++){
        int a = 2;
        for(int j = 1; j <= n+1-i; j++){
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }

    return 0;
}



