#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    // Display options to the user
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    // Get numbers from the user
    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return 1;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return 1;
    }

    // Display the result
    printf("Result: %.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);

    return 0;
}