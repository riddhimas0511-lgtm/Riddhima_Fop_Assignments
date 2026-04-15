#include<stdio.h>
int main()
{
    chr str[10],rev[10];
    int i = 0, length = 0;

    printf("Enter a string:");
    scanf("%s",str);

    while(str[length]!='\0')
    {
        length++;
    }
    for(i = 0; i<length; i++)
    {
         rev[i] = str[length - i - 1];
    }
    rev[i]
}
