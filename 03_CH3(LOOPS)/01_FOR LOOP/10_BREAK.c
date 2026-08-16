// #include <stdio.h>
// int main(){

//     for(int i = 0; i <= 50; i++){
//         printf("%d ", i);
//         if(i == 25){
//             break;
//         }
//     }

//     return 0;
// }



// PROBLEM
// FIND HIGHEST FACTOR OF A GIVEN NUMBER 'N'

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    int hf = 1;
    for(int i = n/2; i >= 1; i--){
        if(n%i == 0){ 
           hf = i;
           break;
        }
    }
    printf("Highest factor is : %d", hf);

    return 0;
}