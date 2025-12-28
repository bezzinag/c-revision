#include <stdio.h>
#include <string.h>

int main()
{
    char name[50] = "";

    printf("Please enter your name.\n");
    fgets(name, sizeof(name), stdin); 
    /* This give a new line character?
    -> Remove newline character if present
      -> A newline character is a special character that represents the end of a line of text.
        -> It is typically represented by the escape sequence '\n' in C.
          ->When you press the Enter key while typing input, a newline character is generated and added to the input string.
    -> This character indicates the end of the input line and is used to separate lines of text.
    -> In C, strings are represented as arrays of characters, and the newline character is treated like any other character in the string.
    To remove it:
    -> Find the newline character and replace it with a null terminator
    name[strlen(name) - 1] = '\0'; // this works only if the input is not empty
    */
   name[strlen(name) - 1] = '\0';

    if(strlen(name) == 0)
    {
        printf("You entered nothing...\n");
    }
    
    else
    {
        printf("Your name is %s", name);
    }

    return 0;
}