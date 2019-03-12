//---------------------------------------------------//
//----Author: Leonardo Rodrigues Miranda Lins--------//
//----Language: C------------------------------------//
//----Tittle: Queue_Linked List----------------------//
//----Status: Working--------------------------------//
//---------------------------------------------------//

#include <stdio.h>
#include <stdlib.h>

struct Node{
  int data;
  struct Node *next;
}*head=NULL;

void add(Node**i, Node**t, int x){
  Node *new = (struct Node*) malloc(sizeof(struct Node));
  new->data = x;
  new->next = NULL;
  if(*i==NULL) *i=new;
  else *t->prox=new;
  *t=new;
}
