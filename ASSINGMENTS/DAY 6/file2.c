#include <stdio.h>

// Function to read operands
void readOperands(double *n1, double *n2) {
    printf("Enter two operands: ");
    scanf("%lf %lf", n1, n2);
}

// Function for addition
double addFun(double a, double b) {
    return a + b;
}

// Function for subtraction
double subFun(double a, double b) {
    return a - b;
}

// Function for multiplication
double mulFun(double a, double b) {
    return a * b;
}

// Function for division
double divFun(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    double num1, num2, result;
    char operator;

    // Read operands
    readOperands(&num1, &num2);

    // Get operator
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator) {
        case '+':
            result = addFun(num1, num2);
            break;
        case '-':
            result = subFun(num1, num2);
            break;
        case '*':
            result = mulFun(num1, num2);
            break;
        case '/':
            result = divFun(num1, num2);
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    printf("Result: %.2lf\n", result);
    return 0;
}
