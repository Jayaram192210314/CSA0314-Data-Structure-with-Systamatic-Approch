#include<stdio.h>
#include<conio.h>
int lin(int[10],int,int);

main()
{ int a[10],pos=-1,n,k,i;
printf("\Enter the size of the array:");
scanf("%d",&n);
printf("\nEnter the elements in the array:");
for(i=1;i<=n;i++)
scanf("\n%d",&a[i]);
printf("\nEnter the search element:");
scanf("\n%d",&k);
pos=lin(a,n,k);
if(pos !=-1)
{
printf("\nthe position of the key element:%d",pos);
}else {
printf("\nthe position is undefined");
}
getch();
}
int lin(int a[],int n,int k)
{
int i;
for(i=0;i<n;i++)
{
if(a[i]==k)
return i;
}
getch();
return -1;
}
