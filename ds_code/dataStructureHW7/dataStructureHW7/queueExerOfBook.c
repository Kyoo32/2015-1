//
//  queue.c
//  dataStructureHW7
//
//  Created by Kate KyuWon on 5/12/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#define boolean int
#define True 1
#define False 0


#include <stdio.h>
#include <stdlib.h>


typedef struct element{
    int number;
} Element;

int rear = 0;
int front = 0;


Element * creatQ(int capacity);
void freeQ(Element * queue);
boolean isQfull(int capacity);
boolean isQempty(int capacity);

void addQ(Element* queue, int capacity, int input);
void deleteQ(Element* queue, int capacity);

void printQ(Element* queue, int capacity);

void queueExtension(Element ** queue, int* capacity);
void copy(Element* srcBegin, Element* srcEnd, Element *dest );

void addExQ(Element** queue, int* capacity, char input);

int main (void) {

    int capa = 7;

    //exercise 10.1-3
	Element * queue = creatQ(capa);

    addQ(queue, capa, 4); //Enqueue(Q,4)
    printQ(queue, capa);
    addQ(queue, capa, 1); //Enqueue(Q,1)
    printQ(queue, capa);
    addQ(queue, capa, 3); //Enqueue(Q,3)
    printQ(queue, capa);
	deleteQ(queue, capa);
    printQ(queue, capa);
    addQ(queue, capa, 8); //Enqueue(Q,8)
    printQ(queue, capa);
    deleteQ(queue, capa);
    printQ(queue, capa);
    
	freeQ(queue);
    
    return 0;
}

/********************************************************
 * queueExtension : if fulled, extend queue by two time *
 ********************************************************/
void queueExtension(Element ** queue, int* capacity){
    int start;
    Element* newQueue = (Element*) malloc ( (sizeof(Element)) * *capacity * 2 );
    
    start = ( front + 1 ) % *capacity;
    if(start < 2)
        copy(*queue + start, *queue + start + *capacity - 1, newQueue);
    else{
        copy(*queue + start, *queue+ *capacity , newQueue);
        copy(*queue, *queue + rear + 1 , newQueue + *capacity - start);
    }
    
    front = 2 * *capacity - 1; rear = *capacity - 2;
    *capacity *= 2;
    freeQ(*queue);
    
    *queue = newQueue;
}

/************************************************************
 * copy : save the element from srcBegin to srcEnd in dest  *
 ************************************************************/
void copy(Element* srcBegin, Element* srcEnd, Element *dest){
    
    while(srcBegin != srcEnd){
        dest->number = srcBegin->number;
        dest++;
        srcBegin++;
    }
    
}

/********************************************************
 * CreatQ : create queue which have n element           *
 ********************************************************/
Element * creatQ(int capacity){
    Element * queue = (Element*) malloc ( (sizeof(Element)) * capacity );
    return queue;
}

/********************************************************
 * freeQ : free queue allocated                         *
 ********************************************************/
void freeQ(Element * queue){
    if(queue != NULL)
    {
        free(queue);
        queue = NULL;
    }
}

/********************************************************
 * isQfull : return True if queue is full or False      *
 ********************************************************/
boolean isQfull(int capacity){
    int nextRear = (rear + 1) % capacity;
    if( nextRear == front) return True;
    else return False;
}

/********************************************************
 * isQempty : return True if queue is empty or False      *
 ********************************************************/
boolean isQempty(int capacity){
    int nextfront= (front + 1) % capacity;
    if( nextfront == rear) return True;
    else return False;
}

/*********************************************************
 * addQ : add element where rear points if it's not full *
 *********************************************************/
void addQ(Element* queue, int capacity, int input){
    if(isQfull(capacity)) {
        printf("Can't input more for Queue is full.\n");
        exit(EXIT_FAILURE);
    }
    else{
        queue[++rear].number = input;
        
    }
}



/****************************************************************
 * deleteQ : remove element where rear points if it's not empty *
 ****************************************************************/
void deleteQ(Element * queue, int capacity){
    if(isQempty(capacity)){
        printf("Can't delete for Queue is empty.\n");
        exit(EXIT_FAILURE);
    }
    else{
        queue[++front].number = 0;
    }
}

/******************************************************************************
 * printQ : show element from next to where front points to where rear points *
 ******************************************************************************/
void printQ(Element* queue , int capacity)
{
    int i= (front+1) % capacity;
    for(;  ; i++){
        i = i % capacity;
        printf("%d", queue[i].number);
        if(i == rear) break;
    }
    printf("\n");
}

