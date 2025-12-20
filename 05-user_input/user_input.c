#include <stdio.h>

//scanf function is used to take user input
// scanf stops taking input when it encounters a space, new line or tab
// solution
//    |
//    |
//  use fgets() function to take string input with spaces
// fgets - > file get string
// fgets(char_array, size_of_char_array, stdin)


int main()
{
    int age;
    float height;
    char name[10];
    char fullname[30];

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your name: ");
    scanf("%s", &name);

    getchar(); //to consume the newline character left by previous scanf
    printf("Enter your full name: ");
    fgets(fullname, sizeof(fullname), stdin); //stdin - standard input

    printf("Your name is %s. You are %d years old and your height is %f meters.\n", name, age, height);
    printf("Your full name is %s\n", fullname);

    return 0;
}