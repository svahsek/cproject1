#include <stdio.h>
#include "programs.h"

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