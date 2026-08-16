// #include <stdio.h>
// int main(){
//     int x, y, temp;
//     x = 20;
//     temp = x;
//     x = y;
//     y = temp;
//     printf("%d", temp);

//     return 0;
// }


// WITHOUT 3RD VARIABLE
#include <stdio.h>
int main(){  
    int x = 10;
    int y = 300;

    x = x + y;
    y = x - y;
    x = x - y;

    printf("%d", x);
    return 0;
}