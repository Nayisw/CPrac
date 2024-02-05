// C program to illustrate strings

#include <stdio.h>
#include <string.h>

int main()
{
    // declare and initialize string
    char str[] = "This is a String";
    // print string
    printf("%s\n", str);

    int length = 0;
    length = strlen(str);
    // displaying the length of string 
    printf("The length of the string is : %d", length);
    return 0;
}
