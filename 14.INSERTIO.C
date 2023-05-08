#include<stdio.h>
#include<conio.h>
main()
{
int arr[50],i,n,value, position;
clrscr();
printf("enter the number in the ARRAY\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("please enter the location where you want to place new element");
scanf("%d",&position);
printf("please enter the value\n");
scanf("%d",&value);
for(i=n-1;i>=position-1;i--)
arr[i+1]=arr[i];
arr[position-1]=value;
printf("Resultant array is\n");
for(i=0;i<=n;i++)
printf("%d\n",arr[i]);
getch();
return 0;
}
