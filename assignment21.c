#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE*source,*dest;
    char ch;
    source = fopen("source txt","r");
    if(source==NULL){
        printf("file not found");
        exit();
    }
    while((ch=fget(source)))
}