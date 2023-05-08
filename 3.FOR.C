//print natural numbers
#include<stdio.h>
#include<conio.h>

main()
{
int n;
int i;
printf("enter the value of n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",i);
}
getch();
return 0;
}