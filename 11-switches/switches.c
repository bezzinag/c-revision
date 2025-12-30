/* switches in C
//switches are used to execute one block of code among multiple options based on the value of a variable
// The switch statement is often used as an alternative to multiple if-else statements 
*/
#include <stdio.h>

int main()
{
    int day = 0;

    printf("Enter a number from 1-7 representing the day of the week: ");
    scanf("%d", &day);

    switch(day)
    {
            case 1:
                printf("Sunday");
            break;

            case 2:
                printf("Monday");
            break;

            case 3:
                printf("Tuesday");
            break;

            case 4:
                printf("Wednesday");
            break;

            case 5:
                printf("Thursday");
            break;

            case 6:
                printf("Friday");
            break;

            case 7:
                printf("Saturday");
            break;

            default: // if none of the cases match, default block is executed
                printf("Invalid input! Please enter a number between 1 and 7.");
            break;
      
    }

    return 0;
}
    