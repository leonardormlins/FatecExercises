
//---------------------------------------------------//
//----Author: Leonardo Rodrigues Miranda Lins--------//
//----Language: C------------------------------------//
//----Tittle: Linked List----------------------------//
//----Status: Working--------------------------------//
//---------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
}*head=NULL;

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

}

void removeEnd(){

}

void removePosition(int pos){

}

void displayList(){

}

int main(){
  
  
  
  return 0;
}
