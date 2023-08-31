#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float num1 , num2 , num3 , arithmeticAverage , geometricAverage = 0.0;

    printf("Enter a first number : ");
    scanf("%f" , &num1);

    printf("Enter a second number : ");
    scanf("%f" , &num2);

    printf("Enter a third number : ");
    scanf("%f" , &num3);

    arithmeticAverage = (num1 + num2 + num3) / 3;
    geometricAverage = cbrt(num1 * num2 * num3);

    printf("Arithmetic Average : %.2f\n" , arithmeticAverage);
    printf("Geometric Average : %.2f" , geometricAverage);
}