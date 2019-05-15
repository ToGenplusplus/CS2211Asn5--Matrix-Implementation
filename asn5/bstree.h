#include "datatype.h"

typedef struct BStree_node{Key key; Data data; struct BStree_node *left, *right;} BStree_node;
typedef BStree_node** BStree;
BStree bstree_ini(void);
void bstree_insert(BStree bst, Key key,Data data);
Data bstree_search(BStree bst, Key key);
void bstree_traversal(BStree bst);
void bstree_free(BStree bst);



