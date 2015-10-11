//
//  Header.h
//  cTree2
//
//  Created by Kate KyuWon on 6/3/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#ifndef cTree2_Header_h
#define cTree2_Header_h
#define boolean int


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


typedef struct element {
    cNode_t * top;
} Element;


/////////stack////////

Element* CreatS(int maxOfStack);
void freeStack(Element * stack);
boolean isEmpty(Element* stack);
boolean isFull(Element * stack, int maxOfStack);
void push(Element * stack, int maxOfStack, cNode_t input);
void pop(Element * stack);
void stackFull(void);

void printStack(Element* stack, int maxOfStact);




//print**orderIterative
void printTreeWithInorderByIterative(cNode_t *node);
void printTreeWihtPreorderByIterative(cNode_t *node);
void printTreeWithPostorderByIterative(cNode_t *node);

#endif
