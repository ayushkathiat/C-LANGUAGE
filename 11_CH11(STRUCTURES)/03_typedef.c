// TYPEDEF = reserved keyword that gives an existinf datatype a "nickname"
//           Helps simplify complex types and improves code readability 

// typedef existing_type new_name;

#include <stdio.h>

typedef int Integer;
typedef char string[50];
typedef float pointnum;

int main(){

    Integer x = 0;

    string name1 = "OC";
    string name2 = "BC";
    string name3 = "CWH";
    string name4 = "AC";

    pointnum y = 9.49;

    printf("%d\n %s\n %s\n %s\n %s\n %.2f", x, name1, name2, name3, name4, y);

    return 0;
}