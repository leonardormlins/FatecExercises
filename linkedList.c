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

void addBeginning(int value){
  struct Node* newNode;
  newNode = (struct Node*)(malloc(sizeof(struct Node)));
  newNode->data = value;
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

void addEnd(int value){

}

void addPosition(int value, int position){

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
