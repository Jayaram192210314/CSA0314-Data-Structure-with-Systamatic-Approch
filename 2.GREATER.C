//a>b
#include<stdio.h>
#include<conio.h>
main ()
{
int a = 20;
int b;
printf("Enter the value of b:");
scanf("%d",&b);
if(a>b)
{
	printf("greatest number is A = %d",a);
}else
{
	printf("greatest number is B = %d",b);
}
getch();
return 0;
}
