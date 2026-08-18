// Search for an ele in an array

#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[] = {1, 2, 4, 8, 9, 14 ,23 ,7};
    int n = sizeof(arr)/4;
    
    int x = 8;
    bool flag = false;
    for(int i = 0; i < n; i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }

    if(flag==1) printf("Exist");
    else printf("DOes NOt exist");

    return 0;
}