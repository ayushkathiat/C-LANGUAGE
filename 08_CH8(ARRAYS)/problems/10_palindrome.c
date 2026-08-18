#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[] = {1, 2, 3, 2, 1};
    int n = sizeof(arr)/n;

    int i = 0;
    int j = n-1;
    bool flag = true;
    while(i<j){
        if(arr[i] != arr[j]){
            flag = false;
            break;
        }
        i++;
        j--;
        
    }

    if(flag == true) printf("This is Palindrone");
    else printf("Not a palindrone");

    return 0;
}

