#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int num , prev , next = 0;

    printf("types a number here : ");
    scanf("%d" , &num);

    next = num + 1;
    prev = num - 1;

    printf("number next : %d\n" , next);
    printf("number prev : %d" , prev);
}