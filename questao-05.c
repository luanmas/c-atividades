#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    float restarautBill = 0.0;

    printf("How much did the bill : ");
    scanf("%f" , &restarautBill);

    printf("Final bill : %.2f $" , restarautBill * 1.10);
}