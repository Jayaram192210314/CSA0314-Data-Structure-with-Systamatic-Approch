#include<stdio.h>
#include<conio.h>
main()
{
int arr[50],i,n,value, position;
clrscr();
printf("enter the SIZE of the ARRAY\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for (i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("please enter the location where you want to delete\n");
scanf("%d",&position);
if(position>=n+1)
{
printf("deletion not possible");
}
else
{
for(i=position-1;i<n-1;i++)
arr[i]=arr[i+1];
}
printf("After deleted array element\n");
for(i=0;i<n-1;i++)
printf("%d\n",arr[i]);
getch();
return 0;
}
