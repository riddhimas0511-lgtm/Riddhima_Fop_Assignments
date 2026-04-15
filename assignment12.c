#include <stdio.h>
#include <stdlib.h>

int main(){
   int num1,num2,i,scd,gcd,choice;
   printf("Enter a choice:\n");
   scanf("d",&choice);
   printf("Enter a number:\n");
   scanf("%d%d",&num1,&num2);
   num1 = abs(num1);
   num2 = abs(num2);

   switch(choice)
   {
    case 1:
    for(i=1;i<=num1&&i<=num2;i++){
        if(num1%i==0&&num2%i==0){
            gcd= 1;
        }
    }
    printf("GCD is %d",gcd);
    break;
    case 2:
    for(i=2;1<=num1&&1<=num2;i=++){
        if(num1%1==0&&num2%1==0){
            scd = 1;
            break;
        }
    }
    if(scd == -1){
        printf("NO COMMON DIVISOR");
    }
    else{
        printf("scd = %d",scd);
    }
    break;
    default:
    printf("invalid choice");
   }
   return 0;
}