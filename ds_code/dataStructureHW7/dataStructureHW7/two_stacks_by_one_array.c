//
//  two_stacks_by_one_array.c
//  dataStructureHW7
//
//  Created by Kate KyuWon on 5/24/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>

#define arrayMax 5

int array[arrayMax];
int top1 = -1;
int top2 = arrayMax;

void push_stack1(int);
int pop_stack1(void);
void push_stack2(int);
int pop_stack2(void);
void printStack1(void);
void printStack2(void);

int main (void){
    
    printf("There are %d rooms you can put one integer\n", arrayMax);
    
    push_stack1(1);
    push_stack2(1);
    printStack1();
    printStack2();
    puts("//");
    
    push_stack1(2);
    printStack1();
    printStack2();
    puts("//");
    
    push_stack2(2);
    printStack1();
    printStack2();
    puts("//");
    
    push_stack1(3);
    printStack1();
    printStack2();
    puts("//");
    
    push_stack2(3);
    printStack1();
    printStack2();
    puts("//");
    

    pop_stack1();
    printStack1();
    printStack2();
    puts("//");
    

    pop_stack1();
    printStack1();
    printStack2();
    puts("//");
    

    pop_stack1();
    printStack1();
    printStack2();
    puts("//");
    

    pop_stack1();
    printStack1();
    printStack2();
    puts("//");
    

    
    return 0;
}

void push_stack1(int input){
    if(top1 + 1 == top2){
        printf("Memory is full. /n");
        return ;
    }
    
    array[++top1] = input;
}

int pop_stack1(void){
    
    if(top1 < 0){
        printf("Memory is empty \n");
        return -1;
    }
    
    return array[top1--];
}
void push_stack2(int input){
    if( top2 - 1 == top1) {
        printf("Memory is full. \n");
        return ;
    }
    
    array[--top2] = input;
}
int pop_stack2(void){
    
    if(top2 >= arrayMax ){
        printf("Memory is empty \n");
        return -1;
    }
    
    return array[top2++];
}

void printStack1(void){
    int i = 0;
    for(i = 0; i <= top1; i++){
        printf("%3d", array[i]);
    }
    printf("\n");
}
void printStack2(void){
    int i = 0;
    for(i = arrayMax-1 ; i >= top2; i--){
       printf("%3d", array[i]);
    }
    printf("\n");
}