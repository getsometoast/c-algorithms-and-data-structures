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

  node *leftChild;
  node *rightChild;

} node;

typedef struct dictionary {

  node *root;

} dictionary;

node* Search(node *root, int key);
node* Insert(node *root, node value);
void Delete(dictionary *dict, node *value);
int Successor(dictionary *dict, int Key);
int Predecessor(dictionary *dict, int key);
int Minimum(dictionary *dict);
int Maximum(dictionary *dict);

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
 * must maintain the balanced tree (this currently doesn't)
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

/* constant time */
void Delete(node *head, item *value) {
  /* need to remove the value but also make sure the tree is still balanced. */
}


