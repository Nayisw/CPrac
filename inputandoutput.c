#include <stdio.h>

int main(int argc, char const *argv[])
{
    
    int age;
    char name[50];

    printf("Enter your name:");
    scanf("%s", name); // whereas we just type the name of the initialized Data type, if it's char.

    printf("Enter your age:");
    scanf("%d", &age); // To assign value to int we use '&'.

    printf("Name is %s and age is %d", name, age);
    return 0;
}
