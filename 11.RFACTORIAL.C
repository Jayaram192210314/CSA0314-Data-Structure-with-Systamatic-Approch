#include<stdio.h>
#include<conio.h>
long factorial(int n)
{
if (n==0)
return 1;
else
return(n * factorial(n-1));
}
main()
{
int number;
long fact;

printf("enter a number:");
scanf("%d",&number);

fact=factorial(number);
printf("Factorial of %d is %d",number,fact);
return 0;
}