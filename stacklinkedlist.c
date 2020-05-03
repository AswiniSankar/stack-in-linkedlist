#include<stdio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node* next;
};
struct node* top=NULL;
void push();
void pop();
void display();
int main()
{ int ch;
 while(1)
 {printf("1.push\n2.pop\n3.display\n4.exit\nyour choice\n");
  scanf("%d",&ch);
  switch(ch)
  {case 1:push();break;
   case 2:pop();break;
   case 3:display();break;
   case 4:exit(1);
   default:printf("invalid option\n");
  }
 }
 printf("\n");
 return 0;
}
void push()
{
 struct node* temp;
 temp=(struct node*)malloc(sizeof(struct node));
 printf("enter the data\n");
 scanf("%d",&temp->data);
 temp->next=top;
 top=temp;
}
void pop()
{
 struct node* temp;
 if(top==NULL)
    printf("stack is empty\n");
 else
 {temp=top;
   printf("the deleted data is %d",temp->data);
   top=temp->next;
    temp->next=NULL;
    free(temp);
 }
}
void display()
{
  struct node* temp;
  if(top==NULL)
     printf("stack is empty\n");
  else
 { temp=top;
    while(temp!=NULL)
    {printf("%d\n",temp->data);
      temp=temp->next;
    }
  }
}
