// IT GIVES US THE REMINDER 
// a % b = reminder when 'a' is divided by 'b'

// a % b = a  [if a < b]
// a % (-b) = a % b
// (-a) % b = -[a % b] 


#include <stdio.h>
int main(){
    int x = 10;
    int y = 3;
    int z = x % y;
    printf("%d", z);

    return 0;
}