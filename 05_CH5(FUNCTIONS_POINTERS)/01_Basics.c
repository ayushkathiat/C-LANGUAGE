// SOME REPETETION WHICH CANNOT BE SOLVE BY LOOP 
//  CAN BE SOLVE BY FUNCTIONS

#include <stdio.h>
void greeting(){              // void is return type finction
    printf("Good MOrinin!\n");
    printf("How are you !\n  ");
}
void India(){
    printf("India is my country\n");
    greeting();
}
void England(){
    printf("I love England\n");
    India();
}
void usa(){
    printf("i love usa\n");
    England();
}
int main(){
    printf("Your are in main\n");
    usa();     // CALLING THE FUNCTION
    return 0;
} 