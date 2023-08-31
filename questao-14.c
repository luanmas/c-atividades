#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float tempCelcius , tempFah = 0.0;

    printf("Enter temperature celcius : ");
    scanf("%f" , &tempCelcius);

    tempFah = (9.0 * tempCelcius + 160.0) / 5.0;

    printf("Converted to Fahrenheit : %.2f" , tempFah);

}
