#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float x1 , x2 , y1 , y2 , d = 0.0;

    printf("Enter a coordinated x1 :");
    scanf("%f" , &x1);

    printf("Enter a coordinated x2 :");
    scanf("%f" , &x2);

    printf("Enter a coordinated y1 :");
    scanf("%f" , &y1);

    printf("Enter a coordinated y2 :");
    scanf("%f" , &y2);

    d = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

    printf("Distance : %.2f" , d);
}