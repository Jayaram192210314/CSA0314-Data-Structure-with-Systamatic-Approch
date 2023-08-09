#include<stdio.h>
#include<conio.h>
int bsearch(int[10],int,int);
main ()
{ int a[10],pos,n,k,i;
printf("\Enter the size of the array:");
scanf("%d",&n);
printf("\nEnter the elements in the array:");
for(i=0;i<n;i++)
scanf("\n%d",&a[i]);
printf("\nEnter the search element:");
scanf("\n%d",&k);
pos=bsearch(a,n,k);
if(pos !=-1)
{
printf("\nthe position of the %d:%d",k,pos);
}else {
printf("\nthe position is undefined");
}
getch();
}
int bsearch(int a[],int n,int k)
{
int lb=0,ub,mid;
lb=0;
ub=n-1;
while(ub>=lb)
{
mid=(lb+ub)/2;
if(k<a[mid])
ub=mid-1;
else if(k>a[mid])
lb=mid+1;
else if(k==a[mid])
return(mid);
}
return -1;
}
