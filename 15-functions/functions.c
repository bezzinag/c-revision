/* what are functions in C?
 -> Functions in C are blocks of code that perform specific tasks. 
   --> They help in organizing code, improving readability, and enabling code reuse.
    A function typically consists of a function declaration (or prototype) 
                                  and a function definition.
-> The function declaration specifies the function's name, return type, and parameters,
->function definition contains the actual code that executes when the function is called.
  Functions can take input parameters, perform operations, and return values to the caller.
  */

#include <stdio.h>
#include <string.h>

void happyBday(char name[], int age)
{
    printf("Happy birthday to you!\n");
    printf("Happy birthday to %s\n", name);
    printf("You are %d years old\n", age);

}

int main ()
{   
    char name[30] = "";   
    int age = 0;

    printf("Please enter your name.\n");
    fgets(name, sizeof(name),stdin);
    printf("Please enter your age \n");
    scanf("%d", &age);

    happyBday(name, age);

    return 0;
}
