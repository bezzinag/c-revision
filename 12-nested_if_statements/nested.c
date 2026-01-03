#include <stdio.h>
#include <stdbool.h>

int main()
{
    float price = 10;
    bool isStudent;
    bool isSenior;
    char answerstd;
    char answersenior;
    
    printf("The standard price for a ticket is 10e\n");
    printf("Are you a Student?: (Y / N)\n");
    scanf("%c", &answerstd);

    switch (answerstd)
    {
        case 'Y':
            isStudent = true;
        break;

        case 'N':
            isStudent = false;
        break;

        default:
            printf("enter Y or N\n");
            scanf(" %c", &answerstd);
        break;
    }
    
    printf("Are you a Senior?: (Y / N)\n");
    scanf(" %c", &answersenior);

    switch (answersenior)
    {
        case 'Y':
            isSenior = true;
        break;

        case 'N':
            isSenior = false;
        break;

        default:
            printf("enter Y or N");
            scanf("%c", &answersenior);
        break;
    }

    if(isStudent == true)
    {
        printf("You have a student discount of 10%\n");
        price = price * 0.9;
        if(isSenior)
        {
            printf("You also have a senior discount of 20%\n");
            price = price * 0.7;
        }
        else
        {        
            printf("Your total is %.2fe\n", price); 
        }   
    }

    else 
    {
        printf("You have no discounts\n");
        printf("Yout total is %.2fe\n", price);

    }

    return 0;
}