#include<stdio.h>
#include<conio.h>
int main()
{
int n1=0,n2=1,n3,i,a;
clrscr();
printf("enter the number of elements:");
scanf("%d",&a);
printf("\n%d\n%d",n1,n2);
for(i=2;i<a;++i)
{
n3=n1+n2;
printf("\n%d",n3);
n1=n2;
n2=n3;
}
getch();
return 0;
}