//
//  main.c
//  dataStructureHW7
//
//  Created by Kate KyuWon on 5/11/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

#define boolean int
#define TRUE 1
#define FALSE 0

typedef struct element {
    int number;
    
} Element;

int top = -1;


Element* CreatS(int maxOfStack);
void freeStack(Element * stack);
boolean isEmpty(Element* stack);
boolean isFull(Element * stack, int maxOfStack);
void push(Element * stack, int maxOfStack, int input);
void pop(Element * stack);
void stackFull(void);

void printStack(Element* stack, int maxOfStact);


int main(int argc, const char * argv[]) {
    
    
    puts("exer 1-1");
    //exerscises 10.1-1

    
    int maxOfStack = 6;
    
    Element* stack =  CreatS(maxOfStack);
    
    int i =0;  ////initializing allocated stack
    for(i=0; i<maxOfStack ; i++){
        stack[i].number = 0;
    }
    
    push(stack, maxOfStack , 4); //PUSH(S, 4)
    printStack(stack, maxOfStack);
    push(stack, maxOfStack , 1); //PUSH(S,1)
    printStack(stack, maxOfStack);
    push(stack, maxOfStack , 3); //PUSH(S,3)
    printStack(stack, maxOfStack);
    
    pop(stack);
    printStack(stack, maxOfStack); //POP(S)
    
    push(stack, maxOfStack , 8); //PUSH(S,8)
    printStack(stack, maxOfStack);
    
    pop(stack);
    printStack(stack, maxOfStack); //POP(S)
  

    freeStack(stack);
    
    puts("exer 1-2");
    
    
     
    
    return 0;
}

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
    if(stack !=NULL){
        free(stack);
        stack = NULL;
    }
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
void push(Element * stack, int maxOfStack, int input){
    
    if(isFull(stack, maxOfStack)) stackFull();
    else{
        top +=1;
        stack[top].number = input;
    }
    return ;
}

/********************************************************
 * pop : remove the element at the top of the stack     *
 ********************************************************/
void pop(Element * stack){
    
    if(isEmpty(stack)) return;
    else {
        stack[top--].number = 0;
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
        printf("%d ", stack[i].number);
    }
    puts(" ");
    
    return;
}





