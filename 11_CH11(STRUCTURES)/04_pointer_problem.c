#include <stdio.h>

typedef int* pointer ;

int main(){
    int x = 10,y = 90;
    pointer a = &x, b = &y;    
    printf("%p", a);
    printf("\n%p", b);
}