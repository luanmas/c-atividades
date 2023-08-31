#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    int num = 0;
    int numberInModule = 0;

    printf("Enter a number integer :");
    scanf("%d" , &num);

    numberInModule = num < 0 ? num * (-1) : num;

    printf("Number in module : %d" , numberInModule);
}