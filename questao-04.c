#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main() {
    int valorReal = 0;

    printf("Insira um valor inteiro : ");
    scanf("%d" , &valorReal);

    printf("Tripled Value : %d\n" , valorReal * 3);
    printf("Value Squared : %d\n" , valorReal * valorReal);
    printf("Half the Value : %d" , valorReal / 2);
}