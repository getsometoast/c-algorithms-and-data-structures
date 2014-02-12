/* a dictionary offers the following operations:
 * - Search
 *   Insert
 *   Delete
 *   Successor
 *   Predecessor
 *   Minimum
 *   Maximum
 */

#include <stdlib.h>
#include <stdio.h>

typedef struct node {
  
  int value;
  int key;
  
  node *parent;
  node *leftChild;
  node *rightChild;

} node;

typedef struct dictionary {

  node *root;

} dictionary;

node* Search(node *root, int key);
node* Insert(node *root, node value);
void Delete(node *root, node *value);
node* Successor(node *root, int Key);
node* Predecessor(node *root, int key);
int Minimum(node *root);
int Maximum(node *root);

int main() {
  
  dictionary dict = malloc(sizeof(dictionary));
  node newItem = malloc(sizeof(node));
  newItem->value = 123;
  newItem->key = 1;

  dict = Insert(dict, newItem);
  dict = Insert(dict, newItem);
  dict = Insert(dict, newItem);

  return 0;
}

/* returns a pointer to the node or NULL if node not found.
 * could run in linear time if the tree not balanced properly.
 * */
node* Search(node *root, int key) {
  
  if(key == root->key)
    return &root;

  if(root->leftChild == NULL && root->rightChild == NULL)
    return NULL;
  else if(key < root->key)
    Search(root->leftChild);
  else
    Search(root->rightChild);
}

/* returns pointer to the current root of the tree after the value has been added. 
 * must maintain the balanced tree by inserting items in a random order.
 * */
node* Insert(node *root, item value) {
  
  if(value->key == root->key)
    return &root; /* no duplicates */

  if(value->key < root->key && root->leftChild == NULL)
  {
    root->leftChild = value;
    return theRoot;
  }

  if(value->key > root->key && root->rightChild == NULL)
  {
    root->rightChild = value;
    return theRoot;
  }
  else if(value->key < root->key)
    Insert(root->leftChild, value);
  else if(value->key > root->key)
    Insert(root->rightChild, value);
}

/* worst case could be n if the tree weren't balanced, average is log(n) */
void Delete(node *head, item *value) {
  value->parent->leftChild = value->leftChild;
  value->parent->rightChild = value->rightChild;

  o
  |
 / \
o   o
   / \
  o   o


  free(value);
}

/* returns pointer to the node that is the successor to the key */
node* successor(node *root, int key) {
  
}




