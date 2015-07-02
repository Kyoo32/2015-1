//
//  iterative*order.c
//  cTree2
//
//  Created by Kate KyuWon on 6/3/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct cNode{
    char key;
    short visited; // 0 - non, 1 - visited.
    struct cNode *parent;
    struct cNode *leftChild;
    struct cNode *rightChild;
}cNode_t;


void iterativeInorder(cNode_t* node){
    Stack_t *inorderStack = creatStack(32);
    
    if (!inorderStack) return;
    
    while(1){
        if(node){
            orderStackPush(node);
            node = node->leftChild;
        }
        
        node = orderStackPop();
        if (!node)  break;
        
        printf("%c", node->key);
        node = node->rightChild;
    }
}


void iterativePostorder(cNode_t* node){
    if(!node) return;
    Stack_t postorderStack = creatStack(32);
    
    if(!postorderStack) return;
    
    while(node){
        
        if(!node->visited){
            preorderStackPush(node);
            node->visited = 1;
        }
        if(node->rightChild && !node->rightChild->visited){
            preorderStackPush(node->rightChild);
            node->rightChild->visited = 1;
        }
        if(node->leftChild){
            node = node->leftChild;
            continue;
        }
        
        node = postorderStackPop();
        
        printf("%c", node->key);

    }
    
    freeStack(preorderStack);
}



void iterativePreorder(cNode_t* node){
    if(!node) return;
    Stack_t *preorderStack = creatStack(32);
    
    if(!preorderStack) return;
    
    while(1){
        printf("%c", node->key);
        
    
        if(node->rightChild)
            preorderStackPush(node->rightChild);
        if(node->leftChild)
            preorderStackPush(node->leftChild);
        
        if(isEmpty) break;
        node = preorderStackPop();
    }
    
    freeStack(preorderStack);
}