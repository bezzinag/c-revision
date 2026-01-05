/* logical operators in C
 && (logical AND), || (logical OR), ! (logical NOT)
  - > logical operators are used to combine multiple conditions in control flow statements
   --> they evaluate to true (1) or false (0) */

   #include <stdio.h>

   int main()
   {
    int temp = 0;

    printf("Enter temperature: ");
    scanf("%d", &temp);
    /*
    if (temp > 0 && temp < 30)
    {
        printf("The temperature is good\n");
    }
    else 
        printf("The temperature is bad\n");
    */
   if (temp <= 0 || temp >= 30)
   {
        printf("The temperature is bad\n");
    }
    else 
        printf("The temperature is good\n");

    return 0;
   }
