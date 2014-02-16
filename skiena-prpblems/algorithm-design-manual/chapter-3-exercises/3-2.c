#include <stdio.h>
#include <stdlib.h>

typedef node {
  int data;
  node *next;
} node;

node* ReverseOrderOfList(node *root);

void main() {
  node root = malloc(sizeof(node));
  node middle = malloc(sizeof(node));
  node last = malloc(sizeof(node));

  root->data = 1;
  middle->data = 2;
  last->data=3;

  root->next = middle;
  middle->next = last;
  last->next = NULL;

  root = ReverseOrderOfList(&root);
}

/* first attempt at reversing order of a single linked list, runs in O(n) linear time. */
node* ReverseOrderOfList(node *root) {
  
  node newRoot = root;

  while(root) {
    /* set new root to current
     * make current -> next point to previous
     * move on */
    
    newRoot = root->next;
    newRoot->next = root;

    root = root->next;
  }
  
  return newRoot;
}
