//format specifiers 
// -> used to specify the type of data to be printed or read
// -> used in functions like printf and scanf
// -> start with % followed by a character that indicates the data type
// -> common format specifiers include:
//    %d or %i - integer
//    %f - floating-point number
//    %c - character
//    %s - string
//    %x - hexadecimal integer
//    %o - octal integer
// -> can include additional flags, width, precision, and length modifiers
#include <stdio.h>

int main() 
{
    int age = 41;
    float height = 6.1;
    double average = 66.98;
    char score = 'C';
    char name[] = "Johny";

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    int num4 = 2;
    int num5 = 20;
    int num6 = 200;

    int num7 = 3;
    int num8 = 30;
    int num9 = 300;

    int num10 = 4;
    int num11 = 40;
    int num12 = -400;

    float num13 = 5.543234;

    printf("Your age is: %d\n", age);
    printf("Your height is: %f\n", height);
    printf("Your average is: %.2lf\n", average);
    printf("Your score is %c\n", score);
    printf("Your name is: %s\n", name);

    printf("%3d\n", num1); // Width of 3, right-aligned by default
    printf("%3d\n", num2); 
    printf("%3d\n", num3);

    printf("%-3d\n", num4); // Width of 3, left-aligned
    printf("%-3d\n", num5);
    printf("%-3d\n", num6);

    printf("%03d\n", num7); // Width of 3, padded with leading zeros
    printf("%03d\n", num8);
    printf("%03d\n", num9);

    printf("%+d\n", num10); // Always show sign
    printf("%+d\n", num11);
    printf("%+d\n", num12);

    printf("%.3f\n", num13); // Precision of 3 decimal places
    printf("%.1f\n", num13); // Precision of 1 decimal place
    printf("%.5f\n", num13); // Precision of 5 decimal places

    return 0;
}