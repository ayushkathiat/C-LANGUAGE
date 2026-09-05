#include <stdio.h>
#include <string.h>

int main(){

    typedef struct circket_players{
        char name[15];
        int age;
        int Num_of_testmatches;
        float avg_runs;
    } players ;

    players arr[20];

    for (int i = 0; i < 20; i++){
        printf("Enter the name of player %d : ", i+1);
        fgets(arr[i].name, sizeof(arr[i].name), stdin);
        printf("Enter the age of player %d : ", i+1);
        scanf("%d", &arr[i].age);
        printf("Enter the number of test matches played by player %d : ", i+1);
        scanf("%d", &arr[i].Num_of_testmatches);
        printf("Enter the average runs scored by player %d : ", i+1);
        scanf("%f", &arr[i].avg_runs);

        printf("\n");

        getchar();  // to consume the newline character left by scanf
    }

    for(int i = 0; i < 3; i++){
        printf("%s\n, %d\n, %d\n, %.2f\n", arr[i].name, arr[i].age, arr[i].Num_of_testmatches, arr[i].avg_runs);
    }

    return 0;
}