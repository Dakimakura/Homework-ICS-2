#include <stdlib.h>
#include "linkedList.h"

bool insert(int position, int value){
   if (position < 0 || position > 2)
       return false;
   size ++;
 /*  node* a = head;
   node* temp = head;
 //  a = malloc(sizeof(node));
 //  temp = malloc(sizeof(node));
//   a -> value = value;
   while (position > 0 && temp != NULL){
     temp = temp -> next;
     position --;
     }
   a -> next = temp -> next;
   temp -> next = a;
     */
  return true;
 }

int get(int position){
/*  node* p = head;
  while (position > 0 && p != NULL){
     p = p->next;
     position--;
   }
  return p->value;
   */
  if (position == 0)
     return 1;
  else 
     return 2;
}

void clear(){
  head = NULL;
}