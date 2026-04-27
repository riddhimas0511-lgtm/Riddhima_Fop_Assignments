#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int choice;
    double x, y;
    int n;

    printf("=== Simple Calculator ===\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Power (x^y)\n");
    printf("6. Factorial (x!)\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result = %.2lf\n", x + y);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result = %.2lf\n", x - y);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            printf("Result = %.2lf\n", x * y);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &x, &y);
            if (y != 0)
                printf("Result = %.2lf\n", x / y);
            else
                printf("Error: Division by zero!\n");
            break;

        case 5:
            printf("Enter base and exponent: ");
            scanf("%lf %lf", &x, &y);
            printf("Result = %.2lf\n", pow(x, y));
            break;

        case 6:
            printf("Enter a number: ");
            scanf("%d", &n);
            if (n < 0)
                printf("Error: Factorial not defined for negative numbers!\n");
            else
                printf("Result = %d\n", factorial(n));
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}