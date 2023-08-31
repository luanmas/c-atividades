#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    double pi = 3.14159;
    float radius = 0.0;

    float areaCircle = 0.0;
    float circumference = 0.0;
    float diameter = 0.0;

    printf("Enter a circle radius :");
    scanf("%f" , &radius);

    areaCircle = pi * (radius * radius);
    circumference = 2.0 * pi * radius;
    diameter = 2.0 * radius;

    printf("Area circle : %f\n" , areaCircle);
    printf("Circumference : %f\n" , circumference);
    printf("Diameter : %f" , diameter);

}