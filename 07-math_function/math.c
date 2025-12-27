#include <stdio.h>
#include <math.h> // Include the math library for mathematical functions


int main()
{
    int x = 9;
    int y = 2;
    float z = 5.6789;
    float a = 3.167;
    float b = 4.832;
    int c = 6;

    x = sqrt(x); // Calculate the square root of x
    y = pow(y, 3); // Raise y to the power of 3
    z = round(z); // Round z to the nearest integer
    a = ceil(a); // Round a up to the nearest integer
    b = floor(b); // Round b down to the nearest integer
    c = abs(c); // Get the absolute value of c -> absolute value is useful for ensuring non-negative values


    printf("%d\n", x);
    printf("%d\n", y);
    printf("%.0f\n", z);
    printf("%.0f\n", a);
    printf("%.0f\n", b);
    printf("%d\n", c);

    return 0;
}