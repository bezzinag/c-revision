#include <stdio.h> /* preprocessor directive - > it includes the standard input-output header file
                                    -> the preprocessor replaces this line with the contents of stdio.h file */

int main() // main function - > the entry point of the program
{   
    //variables - > named storage locations in memory
    //          -> used to store data that can be manipulated during program execution
    //          -> a data container that can be reused

    // int - > integer - > whole numbers - > 4bytes = > %d
    // float - > used for decimal places with 6 digits of precision - > 4 bytes = > %f
    // double -> used for decimal places with 15 digits of precision - > 8 bytes = > %.numberslf

    int age = 30;
    float averagescore = 60.7532123;
    double longdecimal = 6.1412314567234;

    printf("Your age is %d\n", age);
    printf("Your average score for the past year is %f\n", averagescore);
    printf("This is an example of what can be stored in a double type variable: %.15lf\n", longdecimal);
    printf("Enjoy your day!!");
    
    
    return 0; 
}
// main function has int return type - > indicates that the function returns an integer value
//                     -> by convention, returning 0 indicates successful completion of the program