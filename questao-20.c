#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;
    char* numberType = ""; 

    printf("Enter a number here: ");
    scanf("%d", &num);

    numberType = (num % 2 == 0) ? "EVEN" : "ODD";

    printf("Number Type: %s\n", numberType); 
}

