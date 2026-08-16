#include <stdio.h>
int main(){
    // int x = 10;
    // printf("%d\n", x);
    // x++;      // post INCREMENT   // it uses the value first then increment it
    // printf("%d\n", x);
    // ++x;       // PRE INCREMENT    // it increment the value and print it then print it
    // printf("%d\n", x);
    // x--;      // post DECREMENT
    // printf("%d\n", x);
    // --x;       // PRE DECREMENT
    // printf("%d\n", x);

    // POST INCREMENT
    int x = 5;
    printf("%d\n", x);    //5
    printf("%d\n", x++);  //5
    printf("%d\n", x);    //6

    // PRE INCREMENT
    int x = 5;
    printf("%d\n", x);     //5
    printf("%d\n", ++x);   //6
    printf("%d\n", x);     //6


    return 0;
}