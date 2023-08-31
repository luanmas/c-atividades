#include <stdio.h>

int main(){
    float alt;
    char sex[1];

    printf("Entre com sua altura : ");
    scanf("%f", &alt);

    printf("Digite seu sexo com (F/M) ");
    scanf("%c ", &sex);
    puts("\n");

    if (sex == "F" || sex == "f"){
        printf("Peso ideal : %.2f\n", 62.1 * alt - 44.7);
    }
    else if (sex == "M" || sex == "m"){
        printf("Peso ideal \n: %.2f", 72.7 * alt - 58.0);
    }
    else{
        printf("Valor inválido");
        return main();
    }
    return 0;
}