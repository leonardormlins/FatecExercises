
//---------------------------------------------------//
//----Author: Leonardo Rodrigues Miranda Lins--------//
//----Language: C------------------------------------//
//----Tittle: Linked List----------------------------//
//----Status: Working--------------------------------//
//---------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int data;
  struct node *next;
}Node;

void addBeginning(int input){
  struct Node *newNode;
  newNode = (struct Node*)(malloc(sizeof(struct Node)));
  newNode->data = input;
  if(head==NULL)
  {
    newNode->next = NULL;
    head = newNode;
  };
  else{
    newNode->next = head;
    head = newNode;    
  };
  printf("Changed!");
}

void addEnd(int input){
  struct Node *newNode;
  newNode = (struct Node*)(malloc(sizeof(struct Node)));
  newNode->next = NULL;
  newNode->data = input; 
  if(head=NULL)
  {
    head=newNode;
  }
  else
  {
    struct Node *aux = newNode;
    aux=head;
    while(aux->next!=NULL)
    {
      aux = aux->next;
    }
    aux->next = newNode;
  }
  printf("Changed!");
}

void addPosition(int input, int pos){
  struct Node *newNode;
  newNode = (Struct Node*)(malloc(sizeof(struct Node)));
  newNode->data = input;
  struct Node *aux = head;
  if(head==NULL)
  {
    newNode->next=NULL
    head = newNode;
  }
  else
  {
    for(int i=0; i < pos - 1;i++)
    {
      aux = aux->next;
    }
    newNode->next = aux->next;
    aux->next = newNode;
  }
  printf("Done!");
}

void removeBeginning(){
  if (head==NULL)
  {
    printf("Failed!Empty list.");
  }
  else
  {
    struct Node *aux=head;
    if(head->next==NULL)
    {
      head=NULL;
      free(aux);
      printf("Done!);
    }
    else
    {
      head=aux->prox;
      free(aux);
      printf("Done!);
    }
  }
}

void removeEnd(){
  if(head==NULL)
  {
    printf("The list is empty!");
  }
  else
  {
    struct Node *aux1=head, aux2; 
    if(head->next==NULL)
    {
      head=NULL;
    }
    else
    {
      while(aux1->next!=NULL)
      {
        aux2=aux1;
        aux1=aux1->next;
      }
      aux2->next=NULL;
    }
    free(aux1);
    printf("Done!");
  }
}

void removePosition(int pos, struct Node *targ){
  struct Node *newCel = (struct Node*) malloc(sizeof(struct Node));
}

void displayList(){
  struct Node *aux=head;
  while(aux->next!=NULL)
  {
    printf(head->data);
    aux=aux->next;
  }
  printf(aux->data);
}

int main(){
  
  
  return 0;
}
