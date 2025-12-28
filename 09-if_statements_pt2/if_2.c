#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool isStudent = true;
    bool isTeacher = false;

    if(isStudent)
    {
        printf("You are a student.\n");
    }

    else
    {
        printf("You are not a student.\n");
    }

    if(isTeacher == false)
    {
        printf("You are not a teacher.\n");
    }
    else
    {
        printf("You are a teacher.\n");
    }


    return 0;
}