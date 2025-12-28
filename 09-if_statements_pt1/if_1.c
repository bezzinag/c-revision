//if statments in C
/*
 if statements are used to make decisions in code.
    - >they allow you to execute certain code blocks based on conditions.
 syntax of if statements in C:
 if (condition) {
     // code to be executed if condition is true
 } else {
     // code to be executed if condition is false
 }
*/

#include <stdio.h>

int main ()
{
    int age = 0;

    printf("Please enter your age.\n");
    scanf("%d", &age);

    if (age >= 60)
    {
        printf("You are a senior\n");
    }
    else if(age >= 18)
    {
        printf("You are an adult\n");
    }

    else if(age <= 0)
    {
        printf("Impossible\n");
    }

    else if(age == 0)
    {
        printf("You are a newborn\n");
    }

    else
    {
        printf("You are underage\n");
    }



    return 0;
}