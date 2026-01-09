/*while loops in c
 -> A while loop is a control flow statement that allows code to be executed repeatedly 
    based on a given boolean condition.
  --> The while loop can be thought of as a repeating if statement.*/ 

#include <stdio.h>

int main()
{
    int num = 0;
    
    while( num <= 0)
    {
        printf("enter a number greater than 0\n") ;
        scanf ("%d", &num);
    }
    return 0;
}
