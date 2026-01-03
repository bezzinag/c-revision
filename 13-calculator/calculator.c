#include <stdio.h>

int main()
{   
    float num1 = 0;
    float num2 = 0;
    char operator;
    float answer = 0;

    printf ("Select 1st number\n");
    scanf("%f", &num1);

    if(num1 )

    printf("Select the operator: +, -, /, *\n");
    scanf(" %c", &operator);

    printf ("Select 2st number\n");
    scanf("%f", &num2);

    switch(operator)
    {
        case '+':
        answer = num1 + num2;
        break;

        case '-':
        answer = num1 - num2;
        break;

        case '/':
        if(num2 ==0)
        {
            printf("You cannot divide by 0\n");
        }
        else
        {
            answer = num1 / num2;
            break;
        }     

        case '*':
        answer = num1 * num2;
        break;

        default:
        printf("Please enter an operator: +, -, /, *\n");
        scanf("%c", &operator);
        break;
    }

    printf ("Answer is: %.2f\n", answer);


    return 0;
}