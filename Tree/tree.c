#include<stdio.h>
#include<stdlib.h>

struct Node 
{
int data;
struct Node *left;
struct Node * right;
};
struct Node* CreateNode(int x){
struct Node * Root = (struct Node* ) malloc (sizeof (struct Node));
Root->data = x;
Root->left  =NULL;
Root->right =NULL;
return Root;
}

Preorder(struct Node*Root)
{
if(Root == NULL) 
return;
printf("%d",Root->data);
Preorder(Root->left);
Preorder(Root->right);
}

void main()
{
struct Node *Root = CreateNode(1);
Root-> left = CreateNode(2);
Root->right =CreateNode(3);
(Root->right)->left = CreateNode(4);
(Root->right)->right = CreateNode(5);
Preorder(Root);
}