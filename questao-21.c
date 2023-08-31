#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main() {
    int num1 , num2 = 0;
    const char* isMultiple;

    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter another number : ");
    scanf("%d", &num2);

    isMultiple = num2 % num1 == 0 ? "They are multiples" : "They are not multiple";

    printf("%s" , isMultiple);
}