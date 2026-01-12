#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    

    srand(time(NULL));

    int min = 1;
    int max = 10;

    int randomNumber = (rand() % (max - min + 1)) + min;
    printf("%d\n", randomNumber);

    return 0;
}
