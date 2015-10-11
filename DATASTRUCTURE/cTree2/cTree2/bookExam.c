//
//  bookExam.c
//  cTree2
//
//  Created by Kate KyuWon on 6/2/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node *rightChild;
    struct node *leftChild;
    struct node *parent;
}node_t;

typedef struct charNode{
    char key;
    struct charNode *rightChild;
    struct charNode *leftChild;
    struct charNode *parent;
} cNode_t;

typedef struct tree{
    cNode_t *root2;
    node_t *root;
}tree_t;



tree_t* makeSampleBST(void);
void printTreeWithInorder(cNode_t* node);
tree_t* makeSampleTree(void);

//자료구조 교제 5.4 연습문제2
void swapTree(cNode_t *node);

//자료구조 교재 5.4 연습문제 1
int countLeafNode(node_t* node);

//tree가 BST인지 확인하는 함수
int isBST(node_t* node);


int main(void){
    
    tree_t *tree = makeSampleBST();
    
    puts("자료구조 교재 5.4 1 count Leaf node");
    printf("%d\n", countLeafNode(tree->root));
    // puts("time complexity");
    
    puts("\n\nisBST function test");
    if(isBST(tree->root)) printf("Tree is BST\n");
    else printf("Tree is not BST\n");
    
    tree->root->leftChild->data = 100;
    puts("\n\nisBST function test2");
    if(isBST(tree->root)) printf("Tree is BST\n");
    else printf("Tree is not BST\n");
    
    puts("\n\n 자료구조 교재 5.4 2  swapTree");
    puts("(before)");
    tree = makeSampleTree();
    printTreeWithInorder(tree->root2);
    puts(" ");
    puts("(after)");
    swapTree(tree->root2);
    printTreeWithInorder(tree->root2);
    
    
    
   
    
    
    return 0;
}





void printTreeWithInorder(cNode_t* node){
    
    cNode_t *curNode = node;
    if(!curNode) return;
    
    printTreeWithInorder(curNode->leftChild);
    printf("%c, ",curNode->key);
    printTreeWithInorder(curNode->rightChild);
    
}

void swapTree(cNode_t *node){
    
    if(!node) NULL;
    
    if(node->leftChild && node->rightChild){
        cNode_t *temp = node->leftChild;
        node->leftChild = node->rightChild;
        node->rightChild = temp;
    }
    else if(node->leftChild){
        node->rightChild = node->leftChild;
        node->leftChild = NULL;
    }
    else if(node->rightChild){
        node->leftChild = node->rightChild;
        node->rightChild = NULL;
    }
    
    if(node->leftChild) swapTree(node->leftChild);
    if(node->rightChild) swapTree(node->rightChild);
    
    return;
}

int countLeafNode(node_t* node){
    
    if(!node) return 0;
    if(!(node->leftChild) && !(node->rightChild) ) return 1;
    
    return countLeafNode(node->leftChild) + countLeafNode(node->rightChild);
}

int isBST(node_t* node){
    
    if(!node) return 1;
    if(!node->leftChild && !node->rightChild) return 1;
    
    if(node->leftChild)
        if(node->leftChild->data > node->data) return 0;
    if(node->rightChild)
        if(node->data > node->rightChild->data) return 0;
    
    if(! isBST(node->leftChild) ) return 0;
    if(! isBST(node->rightChild) ) return 0;
    
    return 1;
}

tree_t* makeSampleBST(void){
    tree_t *newTree = (tree_t*)malloc(sizeof(tree_t));
    
    node_t *depth0 = (node_t*)malloc(sizeof(node_t));
    newTree->root = depth0;
    depth0->data = 12;
    depth0->parent = NULL;
    
    node_t *depth1_1 = (node_t*)malloc(sizeof(node_t));
    depth1_1->data = 5;
    depth1_1->parent = depth0;
    depth0->leftChild = depth1_1;
    
    node_t *depth1_2 = (node_t*)malloc(sizeof(node_t));
    depth1_2->data = 18;
    depth1_2->parent = depth0;
    depth0->rightChild =depth1_2;
    
    node_t *depth2_1 = (node_t*)malloc(sizeof(node_t));
    depth2_1->data = 2;
    depth2_1->parent= depth1_1;
    depth1_1->leftChild= depth2_1;
    depth2_1->leftChild = NULL;
    depth2_1->rightChild = NULL;
    
    node_t* depth2_2 = (node_t*)malloc(sizeof(node_t));
    depth2_2->data = 9;
    depth2_2->parent = depth1_1;
    depth1_1->rightChild =depth2_2;
    depth2_2->leftChild = NULL;
    depth2_2->rightChild = NULL;
    
    node_t *depth2_3 = (node_t*)malloc(sizeof(node_t));
    depth2_3->data =15;
    depth2_3->parent = depth1_2;
    depth1_2->leftChild = depth2_3;
    
    node_t *depth2_4 = (node_t*)malloc(sizeof(node_t));
    depth2_4->data = 19;
    depth2_4->parent = depth1_2;
    depth1_2->rightChild =depth2_4;
    depth2_4->leftChild = NULL;
    depth2_4->rightChild = NULL;
    
    node_t *depth3_1 = (node_t*)malloc(sizeof(node_t));
    depth3_1->data = 13;
    depth3_1->parent = depth2_3;
    depth2_3->leftChild =depth3_1;
    depth3_1->leftChild = NULL;
    depth3_1->rightChild = NULL;
    
    node_t *depth3_2 = (node_t*)malloc(sizeof(node_t));
    depth3_2->data = 17;
    depth3_2->parent = depth2_3;
    depth2_3->rightChild =depth3_2;
    depth3_2->leftChild= NULL;
    depth3_2->rightChild = NULL;
    
    return newTree;
}


tree_t* makeSampleTree(void){
    tree_t *newTree = (tree_t*) malloc(sizeof(tree_t));
    newTree->root = NULL;
    
    
    cNode_t *depth0 = (cNode_t*)malloc(sizeof(cNode_t));
    depth0->key = 'A';
    depth0->parent = NULL;
    
    newTree->root2 = depth0;
    
    cNode_t *depth1_1 = (cNode_t*)malloc(sizeof(cNode_t));
    depth1_1->key ='B';
    cNode_t *depth1_2 = (cNode_t*)malloc(sizeof(cNode_t));
    depth1_2->key = 'C';
    depth1_1->parent = depth0;
    depth1_2->parent = depth0;
    
    depth0->leftChild = depth1_1;
    depth0->rightChild = depth1_2;
    
    cNode_t *depth2_1 = (cNode_t*)malloc(sizeof(cNode_t));
    depth2_1->key = 'D';
    cNode_t *depth2_2 = (cNode_t*)malloc(sizeof(cNode_t));
    depth2_2->key = 'E';
    depth2_1->parent =depth1_1;
    depth2_2->parent =depth1_1;
    
    depth1_1->leftChild =depth2_1;
    depth1_1->rightChild =depth2_2;
    depth1_2->leftChild =NULL;
    depth1_2->rightChild =NULL;
    
    cNode_t *depth3_1 = (cNode_t*)malloc(sizeof(cNode_t));
    depth3_1->key = 'F';
    cNode_t *depth3_2 = (cNode_t*)malloc(sizeof(cNode_t));
    depth3_2->key = 'G';
    depth3_1->parent =depth2_1;
    depth3_2->parent =depth2_1;
    
    depth2_1->leftChild =depth3_1;
    depth2_1->rightChild =depth3_2;
    depth2_2->leftChild =NULL;
    depth2_2->rightChild =NULL;
    
    cNode_t *depth4_1 = (cNode_t*)malloc(sizeof(cNode_t));
    depth4_1->key = 'H';
    cNode_t *depth4_2 = (cNode_t*)malloc(sizeof(cNode_t));
    depth4_2->key = 'I';
    depth4_1->parent =depth3_1;
    depth4_2->parent =depth3_1;
    depth4_1->leftChild =NULL;
    depth4_1->rightChild =NULL;
    depth4_2->leftChild =NULL;
    depth4_2->rightChild = NULL;
    
    depth3_1->leftChild =depth4_1;
    depth3_1->rightChild =depth4_2;
    depth3_2->leftChild =NULL;
    depth3_2->rightChild =NULL;
    
    
    return newTree;
}
