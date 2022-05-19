#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
}treeNode;

treeNode *makeRootNode(int data,treeNode *leftNode,treeNode *rightNode)
{
    treeNode *root = (treeNode*)malloc(sizeof(treeNode));
    root->data = data;
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

void preorder(treeNode *root)
{
    if(root)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(treeNode *root)
{
    if(root)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void postorder(treeNode *root)
{
    if(root)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main()
{
    treeNode *n3 = makeRootNode(3,NULL,NULL);
    treeNode *n2 = makeRootNode(2,NULL,NULL);
    treeNode *n1 = makeRootNode(1,n2,n3);

    treeNode *n6 = makeRootNode(9,NULL,NULL);
    treeNode *n5 = makeRootNode(99,NULL,NULL);
    treeNode *n4 = makeRootNode(999,n5,n6);

    treeNode *n999 = makeRootNode(99999999,n1,n4);


    printf("\n preorder:");
    preorder(n999);

    printf("\n inorder:");
    inorder(n999);

    printf("\n postorder:");
    postorder(n999);

    printf("\n\n19121363 이호섭 22.5.18");

    return 0;
}