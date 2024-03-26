#include <stdio.h>

int main() {
    int num1, num2, result;
    char op;

    printf("Enter two integer operands: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
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
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 / num2;
            break;
        case '%':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
                return 1;
            }
            result = num1 % num2;
            break;
        default:
            printf("Error: Invalid operator\n");
            return 1;
    }

    printf("%d %c %d = %d\n", num1, op, num2, result);

    return 0;
}