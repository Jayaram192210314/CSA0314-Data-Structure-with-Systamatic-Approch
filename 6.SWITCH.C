//switch
#include<stdio.h>
#include<conio.h>
main ()
{
int a = 20;
int b = 10;
int c;
int d;
printf("enter the value of choose");
scanf("%d",&c);

switch(c)
{
case 1:
d = a+b;
printf("addition = %d",d);
break;
case 2:
d = a-b;
printf("difference = %d",d);
break;
case 3:
d = a*b;
printf("mutiply = %d",d);
break;
case 4:
d = a/b;
printf("div = %d",d);
break;
case 5:
d = a%b;
printf("rem = %d",d);
break;
default:
printf("invalid input");
}
getch();
return 0;
}
