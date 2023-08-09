#include<stdio.h>
#include<stdlib.h>
#define Table_size 10
int h[Table_size] = {NULL};
void search();
void display();
void insert();
main()
{
int opt,i;
clrscr();
while(1)
{
printf("---------------Hashing using Linear Probing Method--------------");
printf("\n1)Insert");
printf("\n2) Search");
printf("\n3) Display");
printf("\n4) Exit");
printf("\nEnter the option:");
scanf("\n%d",&opt);
switch(opt)
{
case 1:
insert();
break;
case 2:
search();
break;
case 3:
display();
break;
case 4:
exit(0);
}
}
}
void insert()
{
int key,hkey,i,index;
printf("Enter the elements in the index");
scanf("%d",&key);
hkey=key%Table_size;
for(i=0;i<Table_size;i++)
{
index=(hkey+i)%Table_size;
if(h[index]==NULL)
{
h[index]=key;
break;
}
}
if(i==Table_size)
printf("\nelement cannot be inserted");
}
void search()
{
int key,hkey,i,index;
printf("Enter the search element");
scanf("%d",&key);
hkey=key%Table_size;
for(i=0;i<Table_size;i++)
{
index=(hkey+i)%Table_size;
if(h[index]==key)
{
printf("%d is the index value",index);
}
}
if(i==Table_size)
printf("\nelement not found");
}
void display()
{
int i;
printf("elements in the hash table");
for(i=0;i<Table_size;i++)
printf("\n%d index the value is %d\n",i,h[i]);
}


