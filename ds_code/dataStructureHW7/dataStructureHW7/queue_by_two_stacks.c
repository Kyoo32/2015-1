//
//  queue_by_two_stacks.c
//  dataStructureHW7
//
//  Created by Kate KyuWon on 5/24/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int element;
    struct node *next;
} node_t;

typedef struct stack{
    node_t *head;
    node_t *top;
} Stack_t;

typedef struct queue{
    Stack_t *basic;
    Stack_t *forDequeue;
} Queue_t;

void enQueue(Queue_t* q, int input);
int deQueue(Queue_t* q);

void pushNode(Stack_t* stack, int input);
int  popNode(Stack_t* stack);

void printQueue(Queue_t *q);

int main(void){
    
    Queue_t *q;
    Stack_t *stack1 = (Stack_t*)malloc(sizeof(Stack_t));
    Stack_t *stack2 = (Stack_t*)malloc(sizeof(Stack_t));
    
    q->basic = stack1;
    q->forDequeue = stack2;
    
    puts("//enqueue");
    enQueue(q, 1);
    enQueue(q, 2);
    enQueue(q, 3);
    
    printQueue(q);
    
    puts("//deQueue");
    deQueue(q);
    deQueue(q);
    printQueue(q);
    
    deQueue(q);
    printQueue(q);
    
    deQueue(q);
    
    
    
    
    return 0;
    
}

void pushNode(Stack_t* stack, int input){
    node_t *new = (node_t*)malloc(sizeof(node_t));
    new->element = input;
    
    if(stack->top == NULL){
        stack-> head = new;
        stack -> top = new;
        new -> next = NULL;
    }
    else{
    stack -> top -> next = new;
    new -> next = NULL;
    
    stack -> top = new;
    }
}
int  popNode(Stack_t* stack){
    
    if(stack->top == NULL){
        printf("No element to be popped\n");
        return -1;
    }
    node_t *curNode;
    curNode = stack->top;
    int popValue = curNode -> element;
    
    if(curNode == stack -> head){
        stack-> head = NULL;
        stack -> top = NULL;
        return popValue;
    }
    
    node_t *prevNode = stack->head;
    while(prevNode->next->next){
        prevNode = prevNode->next;
    }
    
    prevNode->next = NULL;
    stack -> top = prevNode;
    
    free(curNode);
    
    return popValue;
}

void enQueue(Queue_t* q, int input){
    pushNode(q->basic, input);
}

int deQueue(Queue_t* q){
    int popValue = 0;
    
    while(q->basic->top){
        pushNode(q->forDequeue, popNode(q->basic));
    }
    
    popValue = popNode(q->forDequeue);
    
    while(q->forDequeue->top){
        pushNode(q->basic, popNode(q->forDequeue));
    }
    return popValue;
}

void printQueue(Queue_t *q){
    node_t *curNode = q -> basic ->head;
    if(!curNode){
        printf("No element to be printed\n");
        return;
    }
    while(curNode){
        printf("%3d", curNode->element);
        curNode = curNode->next;
    }
    printf("\n");
}
