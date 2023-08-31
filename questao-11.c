#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float dollarQuotation , valueReais , convertToDollar = 0;

    printf("Tell me the dollar exchange rate : ");
    scanf("%f" , &dollarQuotation);

    printf("Now , how many reais do you have : ");
    scanf("%f" , &valueReais);

    convertToDollar = valueReais / dollarQuotation;
    
    printf("Converted Value : %.2f USD" , convertToDollar);
}
