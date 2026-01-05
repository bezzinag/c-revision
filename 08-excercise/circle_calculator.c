#include <stdio.h>
#include <math.h>

int main ()

{
    float radius;
    float pie = 3.142;
    

    printf ("Please enter the radius of the sphere\n");
    scanf("%f", &radius);

    float area = pie * pow(radius, 2);

    printf("The area of the circle is %.2f\n", area);

    float surfaceArea = area * 4;

    printf ("The surface area of a sphere with a radius of %.2f is: %.2f.\n", radius, surfaceArea);
    
    float volume = (4.00 / 3.00) * pie * pow(radius, 3);

    printf ("The volume of the spere is: %.2f", volume);
   

    return 0;
}