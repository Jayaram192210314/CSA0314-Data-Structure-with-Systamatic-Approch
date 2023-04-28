#include<stdio.h>
#include<conio.h>
 int main()
 {
 int num, real, remainder, result=0;
 printf("enter a three digit number:");
 scanf("%d",&num);
 real=num;
 while (real != 0)
 {
 remainder = real%10;
 result += remainder * remainder * remainder;
 real/=10;
 }
 if (result == num)
 printf("%d is an armstrong number.",num);
 else
 printf("%d is not a armstrong number.",num);
 getch();
 return 0;
 }