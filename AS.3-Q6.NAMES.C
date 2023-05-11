#include<stdio.h>
#include<conio.h>
main()
{
int i;
char arr[5][6];
clrscr();
printf("Enter the names of person:");
{
for(i=0;i<5;i++)
scanf("%s",&arr[i]);
}
printf("Names from Array\n");
for(i=0;i<5;i++)
{
printf("%s\n",arr[i]);
}
getch();
return 0;
}