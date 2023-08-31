#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int num = 0;

    printf("Enter a three-digit number : ");
    scanf("%d" , &num);

    printf("%d%d%d\n" , num % 10 , (num % 100) / 10 , num / 100);
}