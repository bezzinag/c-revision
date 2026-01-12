#include <stdio.h>
#include <stdlib.h> // For rand() and srand() 
#include <time.h> // For time()

int main()
{
    srand(time(NULL)); // Seed the random number generator with the current time
    
    printf("%d\n", rand());

    int randomNumber = rand() % 100; // Generate a random number between 0 and 99
      // rand() generates a random integer, and the modulus operator (%) limits it to the range 0-99
    printf("%d\n", randomNumber);

    return 0;
}