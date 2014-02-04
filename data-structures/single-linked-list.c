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

node* Search(node *head, int value);
node* Insert(node *head, int value);
void Delete(node *head, node *nodeToDelete);

main() {
  node *head = malloc(sizeof(node));
  head->value = 123;

  *head = Insert(head, 12);
  *head = Insert(head, 4);
  *head = Insert(head, 15);

  node *four = Search(head, 4);
  
  Delete(head, 4);
}

/* searchs for the node containing the value */
node* Search(node *head, int value) {
  
  node *current = head;
  
  while(current) {
    
    if(current->value == value) {
      return current;
    }
    
    current = current->next;
  }
}

/* inserts at the head of the list */
node* Insert(node *head, int value) {
  
  node *newNode = malloc(sizeof(node));

  newNode->value = value;
  newNode->next = head;

  return newNode;
}

/* deletes a node that contains the value */
void Delete(node *head, int value) {

  node *nodeToDelete = Search(head, value);
  node *current = head;

  while(current) {
    if(current->next == *nodeToDelete) {
      current->next = nodeToDelete->next;
      break;
    }

    current = current->next;
  }
  
  free(nodeToDelete);
}
