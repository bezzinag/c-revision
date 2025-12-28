#include <stdio.h>
#include <math.h>

int main ()
{
    double radius = 0;
    const float pi = 3.14159;
    double area = 0;
    double surfaceArea = 0;
    double volume = 0;

    printf("Enter the radius of the circle\n");
    scanf("%lf", &radius);

    area = pi * pow(radius, 2);

    printf("The area of the circle is %.2lf\n", area);
    printf("\n");

    surfaceArea = 4 * pi * pow(radius, 2);
    printf("Surface area of sphere is: %.2lf\n", surfaceArea);
    printf("\n");
   
    
    volume = (4 / 3) * pi * pow(radius, 3);
    printf("Volume of sphere is %.2lf", volume);

    return 0;
}