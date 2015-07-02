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
    char alphabet;
} Element;

int rear = 0;
int front = 0;


Element * creatQ(int capacity);
void freeQ(Element * queue);
boolean isQfull(int capacity);
boolean isQempty(int capacity);

void addQ(Element* queue, int capacity, char input);
void deleteQ(Element* queue, int capacity);

void printQ(Element* queue, int capacity);

void queueExtension(Element ** queue, int* capacity);
void copy(Element* srcBegin, Element* srcEnd, Element *dest );

void addExQ(Element** queue, int* capacity, char input);

int main (void) {

    int capa = 1000;

    //함수 동작 테스트
	Element * queue = creatQ(capa);

	
    addQ(queue, capa, 'a');
	addQ(queue, capa, 'l');
	addQ(queue, capa, 'g');
	addQ(queue, capa, 'o');
	addQ(queue, capa, 'r');
	addQ(queue, capa, 'i');
	addQ(queue, capa, 't');
	addQ(queue, capa, 'h');
	addQ(queue, capa, 'm');
	addQ(queue, capa, 's');
	    
	printQ(queue, capa);
	   
	deleteQ(queue, capa);
    printQ(queue, capa);
	deleteQ(queue, capa);
    printQ(queue, capa);
	deleteQ(queue, capa);
    printQ(queue, capa);
	deleteQ(queue, capa);
	printQ(queue, capa);
	
    
	freeQ(queue);
    
	    
   // queueExtension,copyblock test
    
    puts("/////////////////////other test");
    rear = 0;
    front = 0;
    
    capa = 2;
    
    Element* queue2 = creatQ(capa);
    
    addExQ(&queue2, &capa, 'a');
    addExQ(&queue2, &capa, 'l');
    
    printQ(queue2 , capa);
    
    addExQ(&queue2, &capa, 'g');
    addExQ(&queue2, &capa, 'o');
    
    printQ(queue2, capa);
    
    addExQ(&queue2, &capa, 'r');
    addExQ(&queue2, &capa, 'i');
    
    printQ(queue2 ,capa);
    
    addExQ(&queue2, &capa, 't');
    addExQ(&queue2, &capa, 'h');
    
    printQ(queue2, capa);
    
    addExQ(&queue2, &capa, 'm');
    addExQ(&queue2, &capa, 's');
    
	printQ(queue2, capa);

    freeQ(queue2);
    
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
        dest->alphabet = srcBegin->alphabet;
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
 * isQemptt : return True if queue is empty or False      *
 ********************************************************/
boolean isQempty(int capacity){
    int nextfront= (front + 1) % capacity;
    if( nextfront == rear) return True;
    else return False;
}

/*********************************************************
 * addQ : add element where rear points if it's not full *
 *********************************************************/
void addQ(Element* queue, int capacity, char input){
    if(isQfull(capacity)) {
        printf("Can't input more for Queue is full.\n");
        exit(EXIT_FAILURE);
    }
    else{
        queue[rear].alphabet = input;
        rear++;
    }
}


/*********************************************************
 * addExQ : add element where rear points                *
 *********************************************************/
void addExQ(Element** queue, int *capacity, char input){
    if(isQfull(*capacity)) {
        queueExtension(queue, capacity);
    }
    (*queue)[++rear].alphabet = input;
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
        queue[++front].alphabet = ' ';
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
        printf("%c", queue[i].alphabet);
        if(i == rear) break;
    }
    printf("\n");
}

