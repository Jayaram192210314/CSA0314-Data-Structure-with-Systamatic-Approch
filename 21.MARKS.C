#include<stdio.h>
#include<conio.h>
int main()
{
int i,total = 0;
int arr_sort[7];
int Percentage;
clrscr();
printf("\nEnter 7 Elements for sorting\n");
for(i=0;i<7;i++)
scanf("%d",&arr_sort[i]);
printf("\nMarks of the Student:");
for(i=0;i<7;i++)
{
printf("\t%d",arr_sort[i]);
}
for(i=0;i<7;i++)
total =total + arr_sort[i];
printf("\nThe total marks of the student:%d",total);
Percentage = total/7;
printf("\nThe percentage of the student:%d",Percentage);
if(Percentage >=80)
{
printf("\nStudent is Distinction");
}
else if(Percentage >=60 && Percentage < 79)
{
printf("\nStudent is in First Division");
}
else if(Percentage >=45 && Percentage < 59)
{
printf("\nStudent is in Second Division");
}
else if(Percentage >=32 && Percentage < 44)
{
printf("\nStudent is in Third Division");
}
else if(Percentage<31)
{
printf("\nStudent is Fail");
}
getch();
return 0;
}
