#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *left;
    struct node *right;
};
struct node* createnode (int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode ->data =data;
    newnode ->left=NULL;
    newnode ->right=NULL;
    return newnode;
}
void postorder(struct node* root){
    if(root == NULL)
    return;
    postorder(root->left);
    postorder(root->right);
    printf("%d",root->data);
}
int main(){
    struct node* root=createnode(1);
    root->left=createnode(2);
    root->right=createnode(3);
    root->left->left=createnode(4);
    root->left->right=createnode(5);
    printf("postorder:");
    postorder(root);
    return 0;
}