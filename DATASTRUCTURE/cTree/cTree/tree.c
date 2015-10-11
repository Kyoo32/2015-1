//
//  main.c
//  cTree
//
//  Created by Kate KyuWon on 5/27/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    char key;
    struct node *parent;
    struct node *leftChild;
    struct node *rightChild;
} node_t;


typedef struct tree{
    node_t *root;
}tree_t;


tree_t* makeSampleTree(void);
void printTreeNode(node_t*);
void printTreeWithInorder(node_t*);
void printTreeWithPreorder(node_t*);
void printTreeWithPostorder(node_t* node);

int main(int argc, const char * argv[]) {
    
    tree_t *newTree = makeSampleTree();
    
    puts("실습: 생성한 트리 테스트");
     printTreeNode(newTree->root);
    puts(" ");
    
    puts("실습: inorder traveral");
    printTreeWithInorder(newTree->root);
    puts(" ");
    
    puts("실습: preorder traveral");
    printTreeWithPreorder(newTree->root);
    puts(" ");
    
    puts("실습: postorder traveral");
    printTreeWithPostorder(newTree->root);
    puts(" ");
    
    return 0;
}

void printTreeWithInorder(node_t* node){
    
    node_t *curNode = node;
    if(!curNode) return;
    
        printTreeWithInorder(curNode->leftChild);
        printf("%c, ",curNode->key);
        printTreeWithInorder(curNode->rightChild);
   
}

void printTreeWithPreorder(node_t* node){
    
    node_t *curNode = node;
    if(!curNode) return;
    
    
        printf("%c, ",curNode->key);
        printTreeWithPreorder(curNode->leftChild);
        printTreeWithPreorder(curNode->rightChild);
    
    
}

void printTreeWithPostorder(node_t* node){
    
    node_t *curNode = node;
    if(!curNode) return;
    
        printTreeWithPostorder(curNode->leftChild);
        printTreeWithPostorder(curNode->rightChild);
        printf("%c, ",curNode->key);
   
    
}


void printTreeNode(node_t* node){
    
    node_t *curNode = node;
    if(!curNode) return;
    
    //printf("curNode's key : %c//\n", curNode->key);
    while(curNode){
        printf("%c, ",curNode->key);
        
        
        if(!curNode->parent) printf("NULL, ");
        else printf("%p, ",curNode->parent);
        if(!curNode->parent) printf("없음, ");
        else printf("%c, ", curNode->parent->key);
        
        if(!curNode->leftChild) printf("NULL, ");
        else printf("%p, ",curNode->leftChild);
        if(!curNode->leftChild) printf("없음, ");
        else printf("%c, ", curNode->leftChild->key);
        
        if(!curNode->rightChild) printf("NULL, ");
        else printf("%p, ",curNode->rightChild);
        if(!curNode->rightChild) printf("없음");
        else printf("%c", curNode->rightChild->key);
        printf("\n");
        
        printTreeNode(curNode->leftChild);
        curNode = curNode->rightChild;
        
    }
}


tree_t* makeSampleTree(void){
    tree_t *newTree = (tree_t*) malloc(sizeof(tree_t));
    newTree->root = NULL;
    
    
    node_t *depth0 = (node_t*)malloc(sizeof(node_t));
    depth0->key = '+';
    depth0->parent = NULL;
    
    newTree->root = depth0;
    
    node_t *depth1_1 = (node_t*)malloc(sizeof(node_t));
    depth1_1->key ='*';
    node_t *depth1_2 = (node_t*)malloc(sizeof(node_t));
    depth1_2->key = 'E';
    depth1_1->parent = depth0;
    depth1_2->parent = depth0;
    
    depth0->leftChild = depth1_1;
    depth0->rightChild = depth1_2;

    node_t *depth2_1 = (node_t*)malloc(sizeof(node_t));
    depth2_1->key = '*';
    node_t *depth2_2 = (node_t*)malloc(sizeof(node_t));
    depth2_2->key = 'D';
    depth2_1->parent =depth1_1;
    depth2_2->parent =depth1_1;
    
    depth1_1->leftChild =depth2_1;
    depth1_1->rightChild =depth2_2;
    depth1_2->leftChild =NULL;
    depth1_2->rightChild =NULL;

    node_t *depth3_1 = (node_t*)malloc(sizeof(node_t));
    depth3_1->key = '/';
    node_t *depth3_2 = (node_t*)malloc(sizeof(node_t));
    depth3_2->key = 'C';
    depth3_1->parent =depth2_1;
    depth3_2->parent =depth2_1;
    
    depth2_1->leftChild =depth3_1;
    depth2_1->rightChild =depth3_2;
    depth2_2->leftChild =NULL;
    depth2_2->rightChild =NULL;
    
    node_t *depth4_1 = (node_t*)malloc(sizeof(node_t));
    depth4_1->key = 'A';
    node_t *depth4_2 = (node_t*)malloc(sizeof(node_t));
    depth4_2->key = 'B';
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