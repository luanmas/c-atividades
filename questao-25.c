#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int seconds , hours , minutes = 0;

    printf("Enter a amount seconds : ");
    scanf("%d" , &seconds);

    hours = seconds / (60 * 60);
    minutes = seconds % 60;
    seconds = (seconds % 60) / 60;

    printf("hours : %d\n" , hours);
    printf("minutes : %d\n" , minutes);
    printf("seconds : %d" , seconds);
}