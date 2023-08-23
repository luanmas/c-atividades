#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void questao02() {
    int num = 0;

    printf("Enter a number here : ");
    scanf("%d" , &num);

    printf("Hex : %x\n" , num);
    printf("Oct : %o" , num);
}

void questao03() {
    float num = 0.0;

    printf("Enter a number with two and more decimal case : ");
    scanf("%f" , &num);

    printf("%.1f" , num);
}

void questao04() {
    int valorReal = 0;

    printf("Insira um valor inteiro : ");
    scanf("%d" , &valorReal);

    printf("Tripled Value : %d\n" , valorReal * 3);
    printf("Value Squared : %d\n" , valorReal * valorReal);
    printf("Half the Value : %d" , valorReal / 2);
}

void questao05() {
    float restarautBill = 0.0;

    printf("How much did the bill : ");
    scanf("%f" , &restarautBill);

    printf("Final bill : %.2f $" , restarautBill * 1.10);
}

// int questao06() {
//     char sex = "m";
//     double height = 0.00;
    
//     printf("Man types m\n");
//     printf("Woman types w\n");
//     printf("Type here : ");
//     scanf("%c" , sex);

//     printf("Your height : ");
//     scanf('%f' , &height);

//     switch (sex) {
//         case 'm' :
//         printf("Your idea weight is %f" ,  72.7 * height -  58);
//         break;

//         case 'w' :
//         printf("Your idea weight is %f" ,  62.1 * height -  44.7);
//         break;

//         default :
//         printf("Escolha inválida");
//         return 0;
//     }

// }

int questao07() {
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

int questao08() {
    int num = 0;

    printf("type a number here : ");
    scanf("%d" ,  &num);

    printf("Squared number : %d" , num * num);
}

int questao09() {
    int num , prev , next = 0;

    printf("types a number here : ");
    scanf("%d" , &num);

    next = num + 1;
    prev = num - 1;

    printf("number next : %d\n" , next);
    printf("number prev : %d" , prev);
}

int questao10 () {
    float lenght, widht, height, totalVolume = 0;

    printf("types lenght here : ");
    scanf("%f" , &lenght);

    printf("types width here : ");
    scanf("%f" , &widht);

    printf("types height here : ");
    scanf("%f" , &height);

    totalVolume =  lenght * widht * height;

    printf("Total volume : %.2f" , totalVolume);
}

int questao11 () {
    float dollarQuotation , valueReais , convertToDollar = 0;

    printf("Tell me the dollar exchange rate : ");
    scanf("%f" , &dollarQuotation);

    printf("Now , how many reais do you have : ");
    scanf("%f" , &valueReais);

    convertToDollar = valueReais / dollarQuotation;
    
    printf("Converted Value : %.2f USD" , convertToDollar);
}

// int questao12 () {
    // int num1 , num2 = 0;

    // printf("teste 1 : ");
    // scanf("%d" , &num1);

    // printf("teste 2 : ");
    // scanf("%d" , &num2);

    // printf("Type a number here : ");
    // scanf("%d", &num1);

    // printf("Now , type another number here : ");
    // scanf("%d" , &num2);

    // printf("Sum : %d\n" , num1 + num2);
    // printf("Multiplication : %d\n" , num1 * num2);
    // printf("Subtration : %d\n" , num1 - num2);
    
    // printf("Power : %d\n" , pow(2 , 5));

    // int resultado = 1;
    
    // for (int i = 0; i < num2; i++) {
    //     resultado =* num1;
    //     printf("result : %d\n" , resultado);
    // }

    // printf("Result : %d" , resultado);
    // printf("Rest of division : %d" , num1 % num2);
// }

int questao13 () {
    float a , b , aux = 0.0;

    printf("Type a number : ");
    scanf("%f" , &a);

    printf("Type another number : ");
    scanf("%f" , &b);

    printf("Before switch\n");
    printf("Value A : %.2f\n" , a);
    printf("Value B : %.2f\n" , b);

    aux = a;
    a = b;
    b = aux;

    printf("After switch\n");
    printf("Value A : %.2f\n" , a);
    printf("Value B : %.2f" , b);

}

int questao14 () {
    float tempCelcius , tempFah = 0.0;

    printf("Enter temperature celcius : ");
    scanf("%f" , &tempCelcius);

    tempFah = (9.0 * tempCelcius + 160.0) / 5.0;

    printf("Converted to Fahrenheit : %.2f" , tempFah);

}

int questao15 () {
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

int questao16 () {
    float valueClassHour = 0.0;
    int hourWorked = 0;
    float grossSalary = 0.0;
    float netSalary = 0.0;

    printf("Enter the hourly rate : ");
    scanf("%f" , &valueClassHour);

    printf("How many hours did you work in the month : ");
    scanf("%d" , &hourWorked);

    grossSalary = valueClassHour * hourWorked;

    if(grossSalary <= 1320.0) {
        netSalary = grossSalary * 0.925;
    }else if(grossSalary <= 2570.0) {
        netSalary = grossSalary * 0.91;
    }else if(grossSalary <= 3857.0) {
        netSalary = grossSalary * 0.88;
    } else {
        netSalary = grossSalary * 0.86;
    }

    printf("Groos Salary : %.2f\n" , grossSalary);
    printf("Net Salary : %.2f" , netSalary);
}

int questao17 () {
    int num = 0;
    int numberInModule = 0;

    printf("Enter a number integer :");
    scanf("%d" , &num);

    numberInModule = num < 0 ? num * (-1) : num;

    printf("Number in module : %d" , numberInModule);
}

int questao18 () {
    double pi = 3.14159;
    float radius = 0.0;

    float areaCircle = 0.0;
    float circumference = 0.0;
    float diameter = 0.0;

    printf("Enter a circle radius :");
    scanf("%f" , &radius);

    areaCircle = pi * (radius * radius);
    circumference = 2.0 * pi * radius;
    diameter = 2.0 * radius;

    printf("Area circle : %f\n" , areaCircle);
    printf("Circumference : %f\n" , circumference);
    printf("Diameter : %f" , diameter);

}


int questao19() {

    printf("Rectangle:\n");
    printf("********\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("*      *\n");
    printf("********\n\n");

    printf("Ellipse:\n");
    printf("   ***   \n");
    printf(" *     * \n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf("*       *\n");
    printf(" *     * \n");
    printf("   ***   \n\n");

    printf("Arrow:\n");
    printf("    *    \n");
    printf("   ***   \n");
    printf("  *****  \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n");
    printf("    *    \n\n");

    printf("Diamond:\n");
    printf("    *    \n");
    printf("   * *   \n");
    printf("  *   *  \n");
    printf(" *     * \n");
    printf("  *   *  \n");
    printf("   * *   \n");
    printf("    *    \n");
}

void questao20() {
    int num = 0;
    char* numberType = ""; 

    printf("Enter a number here: ");
    scanf("%d", &num);

    numberType = (num % 2 == 0) ? "EVEN" : "ODD";

    printf("Number Type: %s\n", numberType); 
}

void questao21() {
    int num1 , num2 = 0;
    const char* isMultiple;

    printf("Enter a number : ");
    scanf("%d", &num1);

    printf("Enter another number : ");
    scanf("%d", &num2);

    isMultiple = num2 % num1 == 0 ? "They are multiples" : "They are not multiple";

    printf("%s" , isMultiple);
}

int questao22() {
    printf("%d\n" , 'A');
    printf("%d\n" , 'B');
    printf("%d\n" , 'C');
    printf("%d\n" , 'a');
    printf("%d\n" , 'b');
    printf("%d\n" , 'c');
    printf("%d\n" , '0');
    printf("%d\n" , '12');
    printf("%d\n" , '$');
    printf("%d\n" , '*');
    printf("%d\n" , '+');
    printf("%d" , '/');
}

int questao23() {
    int num = 0;

    printf("Enter a three-digit number : ");
    scanf("%d" , &num);

    printf("%d%d%d\n" , num % 10 , (num % 100) / 10 , num / 100);
}

int questao25() {
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

int questao26() {
    float x1 , x2 , y1 , y2 , d = 0.0;

    printf("Enter a coordinated x1 :");
    scanf("%f" , &x1);

    printf("Enter a coordinated x2 :");
    scanf("%f" , &x2);

    printf("Enter a coordinated y1 :");
    scanf("%f" , &y1);

    printf("Enter a coordinated y2 :");
    scanf("%f" , &y2);

    d = sqrt(pow(x2 - x1 , 2) + pow(y2 - y1 , 2));

    printf("Distance : %.2f" , d);
}

int questao27() {
    float num1 , num2 , num3 , arithmeticAverage , geometricAverage = 0.0;

    printf("Enter a first number : ");
    scanf("%f" , &num1);

    printf("Enter a second number : ");
    scanf("%f" , &num2);

    printf("Enter a third number : ");
    scanf("%f" , &num3);

    arithmeticAverage = (num1 + num2 + num3) / 3;
    geometricAverage = cbrt(num1 * num2 * num3);

    printf("Arithmetic Average : %.2f\n" , arithmeticAverage);
    printf("Geometric Average : %.2f" , geometricAverage);
}

int main(){
    // questao02();
    // questao03();
    // questao04();
    // questao05();
    // questao07();
    // questao08();
    // questao09();
    // questao10();
    // questao11();
    // questao13();
    // questao14();
    // questao15();
    // questao16();
    // questao17();
    // questao18();
    // questao19();
    // questao20();
    // questao21();
    // questao22();
    // questao25();
    // questao26();
    // questao27();
}