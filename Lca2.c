#include<stdio.h>
#include<math.h>

int main(){
    int binary;
    int decimal = 0 , i = 0 , remainder;
    printf("Enter a binary number:");
    scanf("%d",&binary);

    while(binary!=0){
        remainder = binary%10;
        binary= binary/10;
        decimal = decimal+remainder*pow(2,i);
        i++;
    }
    printf("Decimal number:%d\n",decimal);

    return 0;
}