#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
    float dailyValue = 50.25;
    int workDays = 0;
    float totalValue = 0;

    printf("How much day you working : ");
    scanf("%d" , &workDays);

    if (workDays <= 10) {
        totalValue = workDays * dailyValue;
    } else if (workDays <= 20) {
        totalValue = workDays * dailyValue * 1.20 * 0.90;
    } else {
        totalValue = workDays * dailyValue * 1.30 * 0.90;
    }

    printf("Total value : %.2f" , totalValue);
}