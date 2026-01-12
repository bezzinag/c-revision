#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min = 1;
    int max = 10;
    int playerchoice = 0;

    srand(time(NULL));

    int randomNumber = (rand() % (max - min + 1)) + min;

    printf("***GUESS THE NUMBER***\n");
    printf("Guess a number between %d and %d\n", min, max);
    printf("Enter your guess: ");
    scanf("%d", &playerchoice);

    while (playerchoice < min || playerchoice > max) 
        {
            printf("Error, out of bounce, try again: ");
            scanf("%d", &playerchoice);
        }

   

    while (playerchoice != randomNumber)
    {
        printf("Incorrect Guess! Try again\n");
        printf("Enter your guess: ");
        scanf("%d", &playerchoice);
  
    }

    printf("Your guess was correct. The number was %d.\n", randomNumber);        
    

    return 0;
}
