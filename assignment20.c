#include<stdio.h>
int swap(int a,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main()
{
    swap(10,20);
    printf("swaped values are: %d",swap(10,20));
}