/*
Write a program to input two numbers and display their sum, difference,
product, and quotient. Division by zero should be handled carefully.
*/

#include <stdio.h>

int main() {
    double num1, num2;
    double sum, diff, product, quotient;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;

    printf("Sum = %.2lf\n", sum);
    printf("Difference = %.2lf\n", diff);
    printf("Product = %.2lf\n", product);

    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient = %.2lf\n", quotient);
    } else {
        printf("Quotient = Undefined (division by zero)\n");
    }

    return 0;
}