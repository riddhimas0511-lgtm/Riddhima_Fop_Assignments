#include <stdio.h>
#include <math.h>

int main() {
    int num, i, isPrime = 1;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(num >= 0)
        printf("Square Root: %.2f\n", sqrt(num));
    else
        printf("Square Root: Not defined for negative numbers\n");

    printf("Square: %d\n", num * num);
    printf("Cube: %d\n", num * num * num);

    if(num <= 1)
        isPrime = 0;
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("Prime Check: %d is a Prime number\n", num);
    else
        printf("Prime Check: %d is NOT a Prime number\n", num);

    if(num < 0) {
        printf("Factorial: Not defined for negative numbers\n");
    } else {
        for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial: %d\n", factorial);
    }

    printf("Prime Factors: ");
    if(num <= 1) {
        printf("Not applicable");
    } else {
        int temp = num;
        for(i = 2; i <= temp; i++) {
            while(temp % i == 0) {
                printf("%d ", i);
                temp /= i;
            }
        }
    }

    printf("\n");

    return 0;
}