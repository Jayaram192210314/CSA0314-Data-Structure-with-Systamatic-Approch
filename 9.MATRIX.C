#include<stdio.h>
#include<conio.h>
main()
{
int a[2][2],b[2][2],c[2][2],i,j,k;
printf("Enter the elements of A matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of B matrix:");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&b[i][j]);
}
}
for(i=0; i<2; i++)
{
for(j=0; j<2; j++)
{
c[i][j] = 0;
for(k=0;k<2;k++)
{
c[i][j] = c[i][j] + a[i][k] * b[k][j];
}
}
}
printf("-------------------Result-------------------\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d",c[i][j]);
}
printf("\n");
}
getch();
return 0;
}
