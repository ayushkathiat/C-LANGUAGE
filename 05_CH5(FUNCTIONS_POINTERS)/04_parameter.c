#include <stdio.h>
int oddeven(int n){       // int n is parameter or arguments
    if(n%2 == 0) printf("%d is Even number", n);
    else printf("%d is Odd number", n);
    return n;

}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);

    oddeven(n);    // pass by value

    return 0;
}