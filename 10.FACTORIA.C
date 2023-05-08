#include<stdio.h>
#include<conio.h>
int main()
{
int i;
int fact=1;
int a;
printf("Enterthe value of a:");
scanf("%d",&a);
for(i=1;i<=a;i++)
fact=fact*i;
printf("factorial of %d is: %d",a,fact);
getch();
return 0;
}