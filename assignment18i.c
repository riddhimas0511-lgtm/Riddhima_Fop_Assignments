
#include<string.h>
int main()
{
    int length =0;
    char str1[10];
    printf("Enter a string:\n");
    scanf("%s",str1);
    while(str1[length]!='\0')
    {
        length++;
    } 
    printf("length of string:%d",length);
    return 0;
}

