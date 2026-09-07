#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*left;
    struct node*right;
};
struct node*createnode(int data)
{
    struct node*newnode =(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
void levelorder(struct node *root)
{
    if (root==NULL)
    return;
    int front = 0;
    int rear = 0;
    struct node* queue[100];
    queue[rear++]=root;
    while(front<rear)
    {
        struct node* temp=queue[front++];
        printf("%d",temp->data);
        if(temp->left !=NULL)
        {
            queue[rear++]=temp->left;
        }
        if (temp->right !=NULL)
        {
            queue[rear++]=temp->right;
        }
    }
}
int main()
{
    struct node*root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    root->right->left=createnode(6);
    root->right->right=createnode(7);
    printf("Level order traversal:");
    levelorder(root);
    return 0;
}