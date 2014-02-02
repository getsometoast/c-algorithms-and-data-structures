/* linked lists have the following operations:
  - search: returns pointer to node that contains the value
  - insert: inserts value at head, returns pointer to the new head
  - delete: deletes the node, returns void
*/

#include <stdlib.h>

typedef struct node {
  
  int data;
  struct node *next;
} node;

*node Search(node *head, int value);
*node Insert(node *head, int value);
void Delete(node *head, node *nodeToDelete);

/* searchs for a node by value */
*node Search(node *head, int value) {
  
  node *current = head;
  
  while(current) {
    
    if(current->value == value) {
      return current;
    }
    
    current = current->next;
  }
}

/* inserts at the head of the list */
*node Insert(node *head, int value) {
  
  node *newNode = malloc(sizeof(node));

  newNode->value = value;
  newNode->next = head;

  return newNode;
}

/* deletes a node */
void Delete(node *head, node *nodeToDelete) {

  node *
}



