#include<stdio.h>

int main() {
    int num1, num2, result, choice;
    char c;

    do {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");

        printf("Enter your choice (1-6): ");
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting the calculator.\n");
            break;
        }
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        switch(choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %d + %d = %d\n", num1, num2, result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %d - %d = %d\n", num1, num2, result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %d * %d = %d\n", num1, num2, result);
                break;
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %d / %d = %d\n", num1, num2, result);
                } else {
                    printf("Error! Division by zero.\n");
                }
                break;
            case 5:
                if (num2 != 0) {
                    result = num1 % num2;
                    printf("Result: %d %% %d = %d\n", num1, num2, result);
                } else {
                    printf("Error! Modulus by zero.\n");
                }
                break;
            default:
                printf("Invalid choice! Please choose a valid option (1-6).\n");
        }

        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &c);  // Adding space before %c to consume the newline character

    } while (c == 'y' || c == 'Y');  // Continue if user enters 'y' or 'Y'

    printf("Thank you for using the calculator. Goodbye!\n");

    return 0;
}
