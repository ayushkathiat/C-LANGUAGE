// #include <stdio.h>
// int main(){

//     int x = 3;
//     int* ptr = &x;
//     printf("%d\n", x);
//     x = 9;
//     printf("%d\n", x);

//     return 0;
// }



// OR
#include <stdio.h>
int main(){

    int x = 3;
    int* ptr = &x;
    printf("%d\n", x);
    *ptr = 10;    // ubdate or change
    printf("%d\n", *ptr);

    return 0;
}
