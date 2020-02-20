#include <stdio.h>     //Thanadol Sittibut 6210400680
#include <stdlib.h>


struct node
{
  int data;
  struct node *next;
  struct node *prev;
};


typedef struct node node1;


node1 *Cnewnode(int data)
{
  node1 *newnode = malloc(sizeof(node1));
  newnode->data = data;
  newnode->next = NULL;
  newnode->prev = NULL;

  return newnode;
}


void isnode(node1 *newnode, node1 **head)
{
  node1 *tmp = *head;
  while(tmp != NULL)
  {
    if(newnode->data < tmp->data)
    {
      if(*head == tmp)
      {
        *head = newnode;
        newnode->next = tmp;
        tmp->prev = newnode;
      }
      else 
      {
        tmp->prev->next = newnode;
        newnode->next = tmp;
        newnode->prev = tmp->prev;
        tmp->prev = newnode; 
      }
      break;
    }
    else if(tmp->next == NULL && tmp->data <= newnode->data ) 
    {
      newnode->next = tmp->next;
      newnode->prev = tmp;
      tmp->next = newnode;
      break;
    }
    tmp = tmp->next;
  }
}


void printf_l(node1 *head)
{
  node1 *tmp;
  for(tmp = head;tmp;tmp = tmp->next)
  {
    printf("%d ",tmp->data);
  }
  printf("\n");
}


int main()
{
  int input;
  node1 *head;
  node1 *tmp;

  scanf("%d",&input);
  if(input != -1) 
  {
    tmp = Cnewnode(input);
    head = tmp;

    while(1)
    {
      scanf("%d",&input);
      if (input == -1)
      {
        break;
      }
      tmp = Cnewnode(input);
      isnode(tmp, &head);
    }
  }
  printf_l(head);
}