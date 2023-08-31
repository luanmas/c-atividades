#include <stdio.h>
#include <math.h>

int main(){
    float num1,num2;

    printf("Digite o número: ");
    scanf("%f",&num1);

    printf("Digite outro número: ");
    scanf("%f",&num2);

    printf("Soma: %.1f\n", num1 + num2);
    printf("Produto: %.2f\n", num1 * num2);
    printf("Diferença: %.2f\n",num1 - num2);
    printf("Quociente: %.2f\n",num1 / num2); 
    printf("Resto da divisão: %.2f", fmod(num1,num2));

    return 0;
}