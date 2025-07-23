#include <stdio.h>

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

void salary() {
    float gross_salary, net_salary;
    printf("\nSalary Calculator\n");
    printf("Enter gross salary of an employee: ");
    scanf("%f", &gross_salary);
    if (gross_salary < 10000)
        net_salary = gross_salary;
    else
        net_salary = gross_salary - 0.15 * gross_salary;
    printf("Net salary is Rs.%.2f\n", net_salary);
}

void sum_two_numbers() {
    int num1 = 5, num2 = 10;
    int sum = num1 + num2;
    printf("\nSum of two numbers\n");
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
}

void temperature() {
    float celsius, fahrenheit;
    printf("\nTemperature Converter\n");
    printf("Enter the Temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (1.8 * celsius) + 32;
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
}

void hello_message() {
    printf("\nHello, how are you\n");
}

int main() {
    int choice;
    do {
        printf("\n--- Menu ---\n");
        printf("1. Calculator\n");
        printf("2. Salary Calculator\n");
        printf("3. Sum of Two Numbers\n");
        printf("4. Temperature Converter\n");
        printf("5. Hello Message\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: calculator(); break;
            case 2: salary(); break;
            case 3: sum_two_numbers(); break;
            case 4: temperature(); break;
            case 5: hello_message(); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 0);
    return 0;
}
