//dowhile
#include<stdio.h>
#include<conio.h>

main()
{
int n;
int i=1;
printf("enter the value of n");
scanf("%d",&n);
do
{
printf("%d\n",i);
i++;
}
while(i<=n);
getch();
return 0;
}