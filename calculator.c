#include <stdio.h>
#include "programs.h"

void calculator() {
    char operator;
    double num1, num2, result;
    printf("\nCalculator\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);
    switch (operator) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0) result = num1 / num2;
            else { printf("Error! Division by zero.\n"); return; }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return;
    }
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
}