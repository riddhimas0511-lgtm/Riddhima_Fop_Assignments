#include <stdio.h>
int main()

{
  char ch;
  int n1,n2;
  printf("Enter the character");
  scanf("%s",&ch);
  printf("Enter the n1 and n2 value\n");
  scanf("%d",&n1);
  scanf("%d",&n2),
  printf("A for addition,B for subtraction,C for division,D for multiplication");

  switch(ch)
  {
    case'A':
        printf("Addition of two no. %d\n",(n1+n2));
        break;
    case'B':
        printf("Subtraction of two no. %d\n",(n1-n2));
        break;
    case 'C':
        printf("Division of two no. %d\n",(n1/n2));
        break;
    case'D':
        printf("Multiplication of two no. %d\n",(n1*n2))
        break;
    de                                                                                                                                                                                                                                                                                                                                                       
        printf("invalid")
    

                             


  }
  return 0;
}