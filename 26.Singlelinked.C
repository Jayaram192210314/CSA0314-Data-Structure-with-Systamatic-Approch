#include<stdio.h>
#include<conio.h>

struct Node
{
int data;
struct Node*next;
};

void deleteStart (struct Node**head)
{
 struct Node*temp =*head;
 if(*head==NULL)
 {
 printf("Linked List Empty,nothing to delete");
 return;
 }
 *temp = *head;
*head=(*head)->next;

 printf("\n%d deleted\n",temp->data);
 }
 void insertStart(struct Node**head, int data)
 {
 //dynamically create memory for this newNode
 struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));

 //assign data value
 newNode->data=data;
 //change the next node of this new node
 //to current head of Linked List
 newNode->next = *head;

 //re-assign head to this newNode
 *head = newNode;
 printf("\n%d Inserted\n",newNode->data);
 }

 void display (struct Node*node)
 {
 printf("\nLinked List:");
 //as linked list will end when Node is Null
 while(node!=NULL)
 {
 printf("%d",node->data);
 node=node->next;
 }
 printf("\n");
 }
 int main()
 {
 struct Node*head=NULL;
 //Need '&' i.e address as we need to change head
 insertStart(&head, 100);
 insertStart(&head, 80);
 insertStart(&head, 60);
 insertStart(&head, 40);
 insertStart(&head, 20);
 //No Need for'&' as not changing head in display operation
 display(head);

 deleteStart(&head);
 deleteStart(&head);
 display(head);

 getch();
 return 0;
}
