/* linked lists have the following operations:
  - search: returns pointer to node that contains the data
  - insert: inserts data at head, returns pointer to the new head
  - delete: deletes the node, returns void
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  
  int data;
  struct node *next;
} node;

node* Search(node *head, int data);
node* Insert(node *head, int data);
void Delete(node *head, int data);
void PrintList(node *head);

int main() {
  node *head = malloc(sizeof(node));
  head->data = 123;

  printf("data at head: %d\n", head->data);
  head = Insert(head, 12);
  printf("data at head: %d\n", head->data);
  head = Insert(head, 4);
  printf("data at head: %d\n", head->data);
  head = Insert(head, 15);
  printf("data at head: %d\n\n", head->data);
  
  node *four = Search(head, 4);
  printf("data of four: %d\n\n", head->data);

  PrintList(head);
  Delete(head, 4);
  PrintList(head);

  return 0;
}

/* prints the contents of a list */
void PrintList(node *head) {
  printf("contents of list:\n\n");

  node *current = head;

  while(current) {
    printf("%d\n", current->data);
    current = current->next;
  }

  printf("\n");
}

/* searchs for the node containing the data */
node* Search(node *head, int data) {
  
  node *current = head;
  
  while(current) {
    
    if(current->data == data) {
      return current;
    }
    
    current = current->next;
  }
}

/* inserts at the head of the list */
node* Insert(node *head, int data) {
  
  node *newNode = malloc(sizeof(node));

  newNode->data = data;
  newNode->next = head;

  return newNode;
}

/* deletes a node that contains the data */
void Delete(node *head, int data) {

  node *nodeToDelete = Search(head, data);
  node *current = head;

  while(current) {
    if(current->next == &nodeToDelete) {
      current->next = nodeToDelete->next;
      break;
    }

    current = current->next;
  }
  
  free(nodeToDelete);
}
