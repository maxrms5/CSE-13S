/* Implementing a basic arithmetic calculator */

#include <stdio.h>

void print_choices() {
    printf("Press 1 for addition (+)\n");
    printf("Press 2 for subtraction (-)\n");
    printf("Press 3 for multiplication (*)\n");
    printf("Press 4 for division (/)\n");
    printf("Press 5 for modulus (%%)\n");
    printf("Press 6 for exit\n");
    printf("Please enter your choice (1-6): ");
}

int main() {
    int choice, num1, num2;
    float result;
    int i;

    while (i=1) {
        print_choices();
        scanf("%d", &choice);

        if (choice == 6) {
            printf("Exiting the program. Thank you!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("Please enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = (float) num1 + num2;
                printf("Result: %d + %d = %.2f\n", num1, num2, result);
                break;

            case 2:
                printf("Please enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = (float) num1 - num2;
                printf("Result: %d - %d = %.2f\n", num1, num2, result);
                break;

            case 3:
                printf("Please enter two integers: ");
                scanf("%d %d", &num1, &num2);
                result = (float) num1 * num2;
                printf("Result: %d * %d = %.2f\n", num1, num2, result);
                break;

            case 4:
                printf("Please enter two integers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                    break;
                }
                result = (float) num1 / num2;
                printf("Result: %d / %d = %.2f\n", num1, num2, result);
                break;

            case 5:
                printf("Please enter two integers: ");
                scanf("%d %d", &num1, &num2);
                if (num2 == 0) {
                    printf("Error: Modulus by zero is not allowed.\n");
                    break;
                }
                result = num1 % num2;
                printf("Result: %d %% %d = %.2f\n", num1, num2, result);
                break;

            default:
                printf("Invalid choice. Please enter a number between 1 and 6.\n");
        }
    }
  
    return 0;
}
