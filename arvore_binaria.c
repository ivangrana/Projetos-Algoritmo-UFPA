#include<stdio.h>
#include<stdlib.h>

struct bt
{
struct bt *left;
int data;
struct bt *right;
};
// Function prototypes
void insert(struct bt *root, struct bt *new1);
void in_order(struct bt *temp);
void preorder(struct bt *temp);
void postorder(struct bt *temp);
// main function definition

int main()
{
struct bt *root, *new1;
    int ch;
    char c;
    root=NULL;
do
{
    printf("1. Create 2.In-order 3. Preorder 4. Postorder 5. Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    
switch(ch)
{
case 1:
do
{
new1=(struct bt*)malloc(sizeof(struct bt));
    printf("\n Enter data:");
    scanf("%d",&new1->data);
    new1->left=NULL;
    new1->right=NULL;
if(root==NULL)
{
    root=new1;
}
else
{
    insert(root,new1);
}
    printf("\n Do you want to insert new node [y/n]:");
    scanf("%c",&c);
    c = getchar();
}while(c=='y'||c=='Y');
break;
case 2:
if(root==NULL)
    printf("\n Binary Tree is not created");
else
{
    in_order(root);
}
    break;
case 3:
if(root==NULL)
    printf("Binary Tree is not created");
else
{
    preorder(root);
}
break;
case 4:
if(root==NULL)
    printf("Binary Tree is not created");
else
{
    postorder(root);
}
    break;
case 5:
    exit(0);
default:
    printf("\n wrong choice: ");
}
    printf("\nDo you want to continue Binary Tree [y/n]:");
    scanf("%c",&c);
    c = getchar();
}
while(c=='y'||c=='Y');
return 0;
}
void insert(struct bt* root, struct bt *new1)
{
char c;
printf("\nWhere to insert node right or left of %d:",root->data);
scanf("%c", &c);
c=getchar();
//if new node is to be inserted at right sub-tree
if(c=='r'||c=='R')
{
if(root->right==NULL) //if root node’s right pointer is
{
root->right=new1;
}
else
// otherwise call insert function

{
insert(root->right,new1);
}
}
//if new node is to be inserted at left sub-tree
if(c=='l'||c=='L')
{
if(root->left==NULL)
{
root->left=new1;
}
else
{
insert(root->left,new1);
}
}
}
//in-order traversing of a simple binary tree
void in_order(struct bt *temp) //pass root node address as an argument to a in-order function

{
if(temp != NULL)
{
in_order(temp->left); // Traverse the left sub-tree of root R
    printf("%d\t", temp->data); //Visit the root, R and display.
in_order(temp->right); //Traverse the right sub-tree of root
}
}
//preorder traversing of a simple binary tree
void preorder(struct bt *temp) //pass root node address as an argument to a preorder

{
if(temp != NULL)
{
    printf("%d\t", temp->data); //Visit the root, R and display.
preorder(temp->left); // Traverse the left sub-tree of root R
preorder(temp->right); //Traverse the right sub-tree of root R
}
}
//post-order traversing of a simple binary tree
void postorder(struct bt *temp) //pass root node address as an argument to post-order

//function
{
if(temp!=NULL)
{
postorder(temp->left); // Traverse the left sub-tree of root
postorder(temp->right); //Traverse the right sub-tree of root
printf("%d\t",temp->data); //Visit the root, R and display.
}
}
