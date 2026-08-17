/*
Write a program to input three numbers and find the largest among
them using if-else.
*/

#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Enter third number: ");
    scanf("%lf", &num3);

    if (num1 >= num2 && num1 >= num3) {
        printf("Largest = %.2lf\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("Largest = %.2lf\n", num2);
    } else {
        printf("Largest = %.2lf\n", num3);
    }

    return 0;
}