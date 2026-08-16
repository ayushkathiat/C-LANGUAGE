// DISPLAY GFP - 3, 12, 48

#include <stdio.h>
int main(){
    int n;
    printf("Enter the numebr : ");
    scanf("%d", &n);

    int a = 3;
    for(int i = 0; i <= n; i++){
        printf("%d ", a);
        a = a * 4;
    }

    return 0;
}