#include <stdio.h> /* preprocessor directive - > it includes the standard input-output header file
                                    -> the preprocessor replaces this line with the contents of stdio.h file */
#include <stdbool.h> // includes the standard boolean header file

int main() // main function - > the entry point of the program
{   
    //variables - > named storage locations in memory
    //          -> used to store data that can be manipulated during program execution
    //          -> a data container that can be reused

    // int - > integer - > whole numbers - > 4bytes = > %d
    // float - > used for decimal places with 6 digits of precision - > 4 bytes = > %f
    // double -> used for decimal places with 15 digits of precision - > 8 bytes = > %.numberslf
    // char - > character - > single characters/symbols - > 1 byte = > %c
    // string - > sequence of characters - > array of characters - > %s
    // bool - > boolean - > true or false - > 1 byte = > %d (0 for false, 1 for true)

    int age = 30;
    float averagescore = 60.7532123;
    double longdecimal = 6.1412314567234;
    char gender = 'M';
    char symbol = '@';
    char name[] = "Johnny";
    bool isAdult = true; // true = 1, false = 0

    printf("Your age is %d\n", age);
    printf("Your average score for the past year is %f\n", averagescore);
    printf("This is an example of what can be stored in a double type variable: %.15lf\n", longdecimal);
    printf("Your gender is %c\n", gender);
    printf("This is a symbol: %c\n", symbol);
    printf("Your name is %s\n", name);
    printf("Adult status: %d\n", isAdult); 
    printf("Enjoy your day!!");
    
    
    return 0; 
}
// main function has int return type - > indicates that the function returns an integer value
//                     -> by convention, returning 0 indicates successful completion of the program