/* what is a function prototype in C?
-> A function prototype in C is a declaration of a function that specifies
    -> the function's name, return type, and parameters (if any) 
    -->without providing the actual body of the function. 
->vIt informs the compiler about the function's signature, allowing it to check for correct usage before the function is defined.
*/
#include <stdio.h>
#include <stdbool.h>

void hello (char name[], int age); //function prototype

bool ageCheck(int age);

int main()
{
    char name[10] = "gino";
    int age = 41;
    hello(name, age);

    if(ageCheck(age))
    {
        printf("you are overage\n");
    }
    else 
    {
        printf("You are underage\n");
    }

    return 0;
}

void hello(char name[], int age)
{
    printf("hello hello hello %s!\n", name);
    printf("Your age is %d\n", age);
}

bool ageCheck(int age)
{
    if (age > 18)
    {
    return true;
    }
    else 
    return false;
}