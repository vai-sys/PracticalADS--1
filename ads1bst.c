#include<stdio.h>
int temp,data,root;
struct node
{
    struct node *left;
    int data;
    struct node *right;
};
struct node *create(int data)
{
    struct node *node=(struct node *)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return(node);
}
struct node inorder(struct node *node)
{
struct node *temp=node;
if(temp!=NULL)
{
inorder(temp->left);
printf("%d\n",temp->data);
inorder(temp->right);
}
}
void main()
{
    int n,i;
    printf("enter the number of nodes :\n");
    scanf("%d",&n);
    printf("enter the value:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        root=insert(root,data);
    }
    printf("Inorder traversal of data is:\n");
    inorder(root);
}