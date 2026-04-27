#include<stdio.h>
int main()
{
     int number,remainder;
    printf("Enter a number:");
    scanf("%d", &number);

    printf("Digits in reverse order: ");

    while(number != 0) {
        remainder = number % 10;

        printf("%d", remainder);
        number= number/10;
    }
    return 0;
}