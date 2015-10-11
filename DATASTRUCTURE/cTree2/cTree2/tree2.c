//
//  main.c
//  cTree2
//
//  Created by Kate KyuWon on 5/29/15.
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
void printTreeWithInorder(node_t*);

node_t* copyTree(node_t* pRoot);
int equalTree(node_t* first, node_t* second);

int main(int argc, const char * argv[]) {
    
    tree_t *srcTree = makeSampleTree();
    tree_t *dstTree = (tree_t*)malloc(sizeof(tree_t));
    
    dstTree->root = copyTree(srcTree->root);
    
    printTreeWithInorder(dstTree->root);
    puts(" ");
    
    puts("\ntree equality test1 : dstTree and srcTree");
    if( equalTree(srcTree->root, dstTree->root) ) printf("srcTree and dstTree are equal \n");
    else { printf("srcTree and dstTree are different \n"); }
    
    puts("\ntree equality test2: null and dstTree");
    if( equalTree(NULL, dstTree->root) ) printf("null and dstTree are equal \n");
    else { printf("null and dstTree are different \n"); }
    
    puts("\ntree equality test3: srcTree and null");
    if( equalTree(srcTree->root, NULL) ) printf("srcTree and null are equal \n");
    else { printf("srcTree and null are different \n"); }
    
    
    dstTree->root->leftChild->leftChild->leftChild->key = '+';
    puts("\ntree equality test4: modified dsttree and srcTree");
    if( equalTree(srcTree->root, dstTree->root) ) printf("srcTree and dstTree are equal \n");
    else { printf("srcTree and dstTree are different \n"); }
    
    
    return 0;
}

int equalTree(node_t* first, node_t* second){
    
    if( !first && !second ) return 1;
    
    else if( (!first && second) || (first && !second)) return 0;
    else {
        if(first->key != second->key) return 0;
        if( !(equalTree(first->leftChild, second->leftChild))) return 0;
        if( !(equalTree(first->rightChild, second->rightChild))) return 0;
        
        return 1;
    }
}

node_t* copyTree(node_t* pRoot){
    
    if(!pRoot) return (node_t*)NULL;
    
    node_t* copyNode = (node_t*) malloc(sizeof(node_t));
    copyNode->key = pRoot->key;
    copyNode->leftChild = copyTree(pRoot->leftChild);
    copyNode->rightChild = copyTree(pRoot->rightChild);
    
    return copyNode;
}


void printTreeWithInorder(node_t* node){
    
    node_t *curNode = node;
    if(!curNode) return;
    
    printTreeWithInorder(curNode->leftChild);
    printf("%c, ",curNode->key);
    printTreeWithInorder(curNode->rightChild);
    
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