/*
Write a program to swap two numbers using a third variable.
*/

#include <stdio.h>

int main() {
    double num1, num2, temp;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Before swap: num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap: num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    return 0;
}