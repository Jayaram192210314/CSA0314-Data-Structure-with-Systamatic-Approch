#include<stdio.h>
#include<conio.h>
main()
{
int i,a,b;
clrscr();
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
if(a>0 && b>0)
{
printf("Both are positive");
}
else
{
printf("Either number is negative");
}
getch();
return 0;

}