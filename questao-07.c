#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int min , hours , seconds , totalSeconds = 0;

    printf("Types hours : ");
    scanf("%d" , &hours);
    
    printf("Types minutes : ");
    scanf("%d" , &min);

    printf("Types seconsds : ");
    scanf("%d" , &seconds);

    totalSeconds = (hours * 60 * 60) + (min * 60) + seconds;

    printf("Total seconds : %d" , totalSeconds);
}