//이진 트리의 순회(전위preorder, 중위inorder, 후위 순회postorder)
#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct treeNode
{
    char data;
    struct treeNode *left;
    struct treeNode *right;
}treeNode;

treeNode *makeRootNode(char data,treeNode *leftNode,treeNode *rightNode)
{
    treeNode *root = (treeNode*)malloc(sizeof(treeNode));
    root->data = data;
    root->left = leftNode;
    root->right = rightNode;
    return root;
}

//전위 순회 알고리즘
void preorder(treeNode *root)
{
    if(root)
    {
        printf("%c",root->data); //부모 노드를 먼저
        preorder(root->left); //그 다음 왼쪽 자식
        preorder(root->right); //그 다음 오른쪽 자식.
    }
}

//중위 순회 알고리즘
void inorder(treeNode *root)
{
    if(root)
    {
        inorder(root->left); //먼저 왼쪽 자식
        printf("%c",root->data); //그 다음 부모 
        inorder(root->right); // 그 다음 오른쪽 자식
    }
}

//후위 순회 알고리즘
void postorder(treeNode *root)
{
    if(root)
    {
        postorder(root->left); //먼저 왼쪽 자식
        postorder(root->right); //그 다음 오른쪽 자식
        printf("%c",root->data); //그 다음 부모 자식
    }
}

int main()
{
    treeNode *n1 = makeRootNode('B',NULL,NULL);
    treeNode *n2 = makeRootNode('C',NULL,NULL);
    treeNode *n3 = makeRootNode('**',n1,n2);
    treeNode *n4 = makeRootNode('A',NULL,NULL);
    treeNode *n5 = makeRootNode('/',n4,n3);
    treeNode *n6 = makeRootNode('D',NULL,NULL);
    treeNode *n7 = makeRootNode('*',n5,n6); //*

    treeNode *n8 = makeRootNode('F',NULL,NULL);
    treeNode *n9 = makeRootNode('G',NULL,NULL);
    treeNode *n10 = makeRootNode('-',n8,n9);
    treeNode *n11 = makeRootNode('E',NULL,NULL);
    treeNode *n12 = makeRootNode('/',n11,n10); //*

    treeNode *n13 = makeRootNode('+',n7,n12);

    printf("\n preorder:");
    preorder(n13);

    printf("\n inorder:");
    inorder(n13);

    printf("\n postorder:");
    postorder(n13);

    printf("\n\n19121363 이호섭 22.5.18");

    return 0;
}