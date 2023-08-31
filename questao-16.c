#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main () {
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