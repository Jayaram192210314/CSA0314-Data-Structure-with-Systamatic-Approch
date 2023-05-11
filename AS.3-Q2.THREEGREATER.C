#include<stdio.h>
#include<conio.h>
main()
{
int i,A,B,C;
clrscr();
printf("Enter the value of A:");
scanf("%d",&A);
printf("Enter the value of B:");
scanf("%d",&B);
printf("Enter the value of C:");
scanf("%d",&C);
if (A>B && A>C)
{printf("A is the largest value");
}
else if (B>C && B>A)
{printf("B is the largest value");
}
else if(C>A && C>B)
{printf("C is the largest value");
}
getch();
return 0;
}
