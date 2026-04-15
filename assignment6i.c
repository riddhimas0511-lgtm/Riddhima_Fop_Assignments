#include <stdio.h>
int fact(int x){
    if (x==1){
        return 1;
    }
    return x*fact(x-1);
}
int main() {
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    
    printf("factorial of %d is %d",a,fact(a));

return 0;
    
}