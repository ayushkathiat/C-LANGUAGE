#include <stdio.h>
#include <string.h>
int main (){
    struct books
    {
        char name[50];
        char writer[50];
        int num_of_pages;
        float price;
    }Atomic_habits, My_inventions, Let_us_c;
    
    strcpy(Atomic_habits.name, "Atomic Habits");    // strcpy() = string copy function from source to destination
    strcpy(Atomic_habits.writer, "james_bond");
    Atomic_habits.num_of_pages = 230;
    Atomic_habits.price = 560.90;

    strcpy(My_inventions.name, "My Inventions");
    strcpy(My_inventions.writer, "Nikola tesla");
    My_inventions.num_of_pages = 135;
    My_inventions.price = 230.90;

    strcpy(Let_us_c.name, "Let Us C");
    strcpy(Let_us_c.writer, "james_bond");
    Let_us_c.num_of_pages = 230;
    Let_us_c.price = 560.90;

    printf("Book name : %s\n", Atomic_habits.name);
    printf("Writer : %s\n", Atomic_habits.writer);
    printf("Number of pages : %d\n", Atomic_habits.num_of_pages);
    printf("Price : $%.2f\n" ,Atomic_habits.price);

    return 0;
}