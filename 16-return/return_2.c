#include <stdio.h>
#include <stdbool.h>

bool isOverage(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    } 

}

int main()
{
    int age = 0;

    printf("Please enter your age: ");
    scanf("%d", &age);

    if (isOverage(age))
    {
        printf("You are overage");
    }
    else
    {
        printf("You are underage");
    }
    
    return 0;
}
