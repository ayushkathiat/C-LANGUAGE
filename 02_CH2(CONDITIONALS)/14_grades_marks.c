#include <stdio.h>
int main(){
    int x;

    printf("Enter the persentage of student : ");
    scanf("%d", &x);

    if(x >= 81 && x <= 100){
        printf("Very Good");
    }
    else if(x >= 61 && x <= 80){
        printf("Good");
    }
    else if(x >= 41 && x <= 60){
        printf("Average");
    }
    else{
        printf("Fail");
    }

    return 0;
}


