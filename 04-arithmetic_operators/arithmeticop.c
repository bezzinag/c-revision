//arithmetic operators 
// - > Addition (+), Subtraction (-), Multiplication (*), Division (/), Modulus (%), ++ (Increment), -- (Decrement)
// % Modulus operator is used to get the remainder of a division operation

//augmented assignment operators
// +=, -=, *=, /=, %=
#include <stdio.h>

int main()
{
    int x = 2;
    int y = 4;
    int z = 0;
    int v = 0;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    //z = y / x;
    z = x / y; //nteger cannot hold decimal values so the result will be 0
    v = x % y;

    int a = 2;
    float b = 3;
    float c = 0;
    int d = 3;
    int e = 2;
    int f = 4;
    int g = 5;
    int h = 6;
    int i = 9;

    c = a / b;
    d++;
    e--;
    f+= 2;
    g-= 3;
    h*= 2;
    i/= 3;
    

    printf("%d\n", z);
    
    printf("%f\n", c);
    printf("%d\n", v);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%d\n", f);
    printf("%d\n", g);
    printf("%d\n", h);
    printf("%d\n", i);


    return 0;
}