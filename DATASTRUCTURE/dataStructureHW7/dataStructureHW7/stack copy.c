//
//  main.c
//  dataStructureHW7
//
//  Created by Kate KyuWon on 5/11/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


/********************************************************
 * CreatS : create element array which have n element   *
 ********************************************************/
Element* CreatS(int maxOfStack){
    Element* ptr= (Element*)malloc( (sizeof(Element)) * maxOfStack );
    return ptr;
}

/********************************************************
 * freeStack : free stack allocated                     *
 ********************************************************/
void freeStack(Element * stack){
    free(stack);
    return;
}

/********************************************************
 * isEmpty : if no element, it returns true              *
 ********************************************************/
boolean isEmpty(Element* stack){
    if (top < 0) return TRUE;
    else return FALSE;
}

/********************************************************
 * isFull : if array is full, it returns true           *
 ********************************************************/
boolean isFull(Element * stack, int maxOfStack){
    if( top >= maxOfStack ) return TRUE;
    else return FALSE;
}

/********************************************************
 * push : insert the element at the top of the stack     *
 ********************************************************/
void push(Element * stack, int maxOfStack, cNode_t* input){
    if(isFull(stack, maxOfStack)) stackFull();
    else{
        stack[++top].alphabet = input;
    }
    return ;
}

/********************************************************
 * pop : remove the element at the top of the stack     *
 ********************************************************/
void pop(Element * stack){
    if(isEmpty(stack)) return;
    else {
        stack[top--].alphabet = ' ';
    }
}

/********************************************************
 * stackFull : if the stack is full, show error         *
 ********************************************************/
void stackFull(void){
    fprintf(stderr, "Stack is full, cannot add element");
    exit(EXIT_FAILURE);
}

/********************************************************
 * printStack : while poping the stack, print the top   *
 ********************************************************/
void printStack(Element* stack, int maxOfStact){
    int i=0;
    
    for(i=0; i<maxOfStact; i++){
        printf("%c", stack[top].alphabet);
        pop(stack);
    }
    
    return;
}





