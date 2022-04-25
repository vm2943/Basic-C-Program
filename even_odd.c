#include <stdio.h>
int main() 
{
 /*Program to find if number is even or odd */
 int number;
 printf("Enter the number to be checked\n");
 scanf("%d",&number);
 if(number%2==0)
  printf("The number is even");
 else
  printf("The number is odd");
 return 0;
}
