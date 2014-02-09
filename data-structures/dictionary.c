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

typedef struct dictionary {

  int data[10];
} dictionary;

int Search(dictionary *dict, int value);
void Insert(int value);
void Delete(int key);
int Successor(int Key);
int Predecessor(int key);
int Minimum();
int Maximum();

int Search(dictionary *dict, int value) {
  
}

void Insert(dictionary *dict, int value) {

}

void Delete(dictionary *dict, int key) {

}
