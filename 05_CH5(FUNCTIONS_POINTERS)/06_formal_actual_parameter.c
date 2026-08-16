#include <stdio.h>
int min(int x, int y){    // INT X, INT YFORMAL PARAMETER  
                          // variables/containers
    if(x<y) return x;
    else return y;
}
int main(){
    int a = 3, b = 90;
    int m = min(a, b);   // ACTUAL PARAMETER A, B
                         // these are actual values
    printf("The min of %d and %d is : %d", a, b, m);

    return 0;
}