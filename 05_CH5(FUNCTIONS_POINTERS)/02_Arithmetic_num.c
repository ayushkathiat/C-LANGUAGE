#include <stdio.h>
int add(int a, int b){   // these BOTH ARE ARGUMENTS
    return a+b;
}
int subtract(int a, int b){   // these BOTH ARE ARGUMENTS
    return a-b;
}
int multiple(int a, int b){   // these BOTH ARE ARGUMENTS
    return a*b;
}
float Division(float a, float b){   // these BOTH ARE ARGUMENTS
    return a/b;
}
int main(){
    int a, b;
    printf("ENter num : ");
    scanf("%d", &a);
    printf("ENter num : ");
    scanf("%d", &b);
    
    int sum = add(a, b);
    int minus = subtract(a, b);
    int product = multiple(a, b);
    float divide = Division(a, b);

    printf("Addition : %d\n", sum);
    printf("Subtraction : %d\n", minus);
    printf("Multiplication : %d\n", product);
    printf("Division : %.2f", divide);

    return 0;
}
