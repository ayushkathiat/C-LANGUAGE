#include <stdio.h>
int main(){
    int cp, sp;

    printf("Enter the cost price : ");
    scanf("%d", &cp);

    printf("Enter the seling price : ");
    scanf("%d", &sp);

    if(cp > sp){
        printf("you made a loss\n");
        printf("profit is %d", cp - sp);
    }
    if(sp > cp){
        printf("You made a profit\n");
        printf("profit is %d", sp - cp);
    }
    if(cp == sp){
        printf("No profit no loss");
    }

    return 0;
}

 
