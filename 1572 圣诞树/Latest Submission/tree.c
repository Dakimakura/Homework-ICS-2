#include <stdio.h>
#include <stdlib.h>
#include "tree.h"

Node* init_root(int value){
   Node* root = (Node*)malloc(sizeof(Node));
   root -> left = NULL;
   root -> right = NULL;
   root -> value = value;
   return root;
 }

void insert_node(Node *p, int value)
{
	Node* in = (Node*)malloc(sizeof(Node));
	in -> left = NULL;
	in -> right = NULL;
	in -> value = value;
	Node* temp = p;
	while (temp -> left != NULL || temp -> right != NULL)
	{
		if (temp -> right == NULL && temp -> value < value)
			break;
		if (temp -> left == NULL && temp -> value > value)
			break;	
		temp = (temp -> value > value)? temp -> left : temp -> right;
	}
	if (temp -> value > value)
		temp -> left = in;
	else
		temp -> right = in;
}


void traverse_tree_inorder(Node *p)
{
	if (p != NULL)
	{
        traverse_tree_inorder(p -> left);
        printf("%d ", p -> value);            
        traverse_tree_inorder(p -> right);
    }
    return;
}

void recycle_nodes(Node *p)
{
	if (p != NULL)
	{
        recycle_nodes(p -> left);
        recycle_nodes(p -> right);
        free(p);
    }
}