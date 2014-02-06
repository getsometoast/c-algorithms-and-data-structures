/*
 * Double linked lists have the following operations:
 * - 
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  
  int data;
  struct node *next;
  struct node *previous;
} node;

node* Search(node *head, int data);
node* Insert(node *head, int data);
void Delete(node *head, int data);
void PrintList(node *head);

int main() {

}

node* Search(node *head, int data) {

  node *current = head;

  while(current) {

    if(current->data == data) {
      return current;
    }

    current = current->next;
  }

  return NULL
}

/* improved performance for delete with a double linked list */
void Delete(node *head, int data) {
  
  node *nodeToDelete = Search(head, data);
  node *previous = nodeToDelete->previous;
  
  previous->next = nodeToDelete->next;

  free(nodeToDelete);
}

