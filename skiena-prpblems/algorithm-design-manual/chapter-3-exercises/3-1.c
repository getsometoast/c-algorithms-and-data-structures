#include <stdio>
#include <stdlib>

type_def node {
  char value;

  node *previous;
  node *next;
} node;

bool CheckParenthases(char input[]);

void main() {
  CheckParenthases("((()))()()");
  CheckParenthases(")()()()(");
  CheckParenthases("()()())");
  CheckParenthases("((())");
}

/*first attempt at check parenthases algorithm executes in O(n) linear time...*/
bool CheckParenthases(char input[]) {
  
  /*if there's nothing in the input, we fail.*/
  if(input.length < 1)
    return false;

  /*if there's an odd number of parenthases, we fail*/
  if((input.length % 2) != 0)
    return false;

  int i;
  node root = malloc(sizeof(node));
  node temp = malloc(sizeof(node));
  root->next = NULL;
  root->value = input[0]
  root->previous = NULL;

  /*this will execute at most n times where n is the length of input*/
  for(i = 0; i < input.length(); i++) {
    
    if(input[i] == ')') {
      
      if(current == NULL)
        return false;

      /*delete current*/
      temp = current->previous;
      temp->next = NULL;
      free(current);
      current = temp;
    }
    else {
      /*insert new node*/
      node newNode = malloc(sizeof(node));
      newNode->value = '(';
      current->next = newNode;
      newNode->previous = current;
      current = newNode;
    }
  }

  /*if there's anything left in the list, we fail*/
  if(current != NULL)
    return false;

  /*if we get here we've passed*/
  return true;
}

/*same as above but without the complexity of a linked list. still O(n).*/
bool CheckParenthases_Two(char input[]) {
  
  if(input.length < 1)
    return false;
  if((input.length % 2) != 0)
    return false;

  int i;
  int total = 0;

  for(i = 0; i < input.length; i++) {
    if(input[i] == '(')
      total++;
    else 
      total--;

    if(total < 0)
      return false;
  }

  if(total > 0)
    return false;

  return true;
}
