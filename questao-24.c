#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int x , n , res = 0;

    printf("Enter a value x : ");
    scanf("%d", &x);

    printf("Enter a value n : ");
    scanf("%d" , &n);

    res = x << n;

    printf("Result : %d" , res);
}