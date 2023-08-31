#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float a , b , aux = 0.0;

    printf("Type a number : ");
    scanf("%f" , &a);

    printf("Type another number : ");
    scanf("%f" , &b);

    printf("Before switch\n");
    printf("Value A : %.2f\n" , a);
    printf("Value B : %.2f\n" , b);

    aux = a;
    a = b;
    b = aux;

    printf("After switch\n");
    printf("Value A : %.2f\n" , a);
    printf("Value B : %.2f" , b);

}