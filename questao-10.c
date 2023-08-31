#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    float lenght, widht, height, totalVolume = 0;

    printf("types lenght here : ");
    scanf("%f" , &lenght);

    printf("types width here : ");
    scanf("%f" , &widht);

    printf("types height here : ");
    scanf("%f" , &height);

    totalVolume =  lenght * widht * height;

    printf("Total volume : %.2f" , totalVolume);
}