#include <stdio.h>
int main()
{
int num, temp, sum;

printf("Enter a number");
scanf("%d",&num);

    temp = num;
    sum=0;
    while(temp>0)
    {
       int digit = temp % 10;
        sum=sum+(digit*digit*digit);
        temp=temp/10;
    }
    if(sum==num)
    {
        printf("%d is an ammstrong number.\n",num);
    }
    else
    {
        printf("%d is not an ammstrong number.\n",num);
    }
    return 0;
}