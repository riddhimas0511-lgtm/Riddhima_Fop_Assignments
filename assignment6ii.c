#include <stdio.h>
int fact(int x){
    int factorial = 1;
    for(int i=1; i<=x; i++){
        factorial = factorial*i;
    }
    return factorial;
}
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    
    printf("factorial of %d is %d",a,fact(a));

    return 0;
    
}