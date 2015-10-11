//
//  merge_two_linked_list.c
//  cLinkedList
//
//  Created by Kate KyuWon on 5/25/15.
//  Copyright (c) 2015 Kate KyuWon. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node_t;

typedef struct list {
    node_t* head;
} list_t;

void printAllList(list_t* list);

void makeNodeAtFront(list_t* list, int data);
void insertNode(list_t* list, node_t* nodeA, node_t* nodeB);

list_t* mergeTwoNondecreasingLinkedLists(list_t* list1, list_t*list2);

int main(void){
    
    list_t *list1 = (list_t*)malloc(sizeof(list_t));
    list_t *list2 = (list_t*)malloc(sizeof(list_t));
    
    makeNodeAtFront(list1, 10);
    makeNodeAtFront(list1, 7);
    makeNodeAtFront(list1, 3);
    makeNodeAtFront(list1, 1);
    
    puts("//before merge");
    printAllList(list1);
    
    makeNodeAtFront(list2, 10);
    makeNodeAtFront(list2, 8);
    makeNodeAtFront(list2, 6);
    makeNodeAtFront(list2, 5);
    makeNodeAtFront(list2, 2);
    makeNodeAtFront(list2, 1);
    
    printAllList(list2);
    
    puts("\n//after merge");
    printAllList(mergeTwoNondecreasingLinkedLists(list1, list2));
    
    free(list1);
    free(list2);
    
    return 0;
}

list_t* mergeTwoNondecreasingLinkedLists(list_t* list1, list_t*list2){
    
    if(!list1 || !list2) return NULL;
   
    list_t *new = (list_t*)malloc(sizeof(list_t));
    new->head = NULL;
    
    node_t *curNode = new->head;
    
    
    if(!list1->head){
        puts("//ta");
        new->head = list2->head;
        return new;
    }
    else if(!list2->head){
        puts("//da");
        new->head = list1->head;
        return new;
    }
    else {
        
        if( list1->head->data <= list2->head->data){
            new->head = list1->head;
            list1->head = list1->head ->next;
        }
        else {
            new->head = list2->head;
            list2->head = list2->head ->next;
        }
        curNode = new->head;
    
        
        while((list1->head) && (list2->head)){
            
            if(list1->head->data <= list2->head->data){
                curNode->next= list1->head;
                list1->head = list1->head->next;
            }
            else{
                curNode->next= list2->head;
                list2->head = list2->head->next;
            }
             curNode = curNode->next;
            
        }
        
        if(list1->head) curNode->next = list1->head;
        if(list2->head) curNode->next = list2->head;
    
        return new;
    }
}
    
    

void printAllList(list_t *list){
    
    if(list==NULL) return;
    
    node_t *curNode;
    curNode = list->head;
    
    while(curNode){
        printf("%d ", curNode->data);
        
        curNode = curNode->next;
    }
    printf("\n");
    
    
    return;
}

void makeNodeAtFront(list_t* list, int userData){
    node_t *node = (node_t*)malloc(sizeof(node_t));
    node->data = userData;
    
    if(list){
        node->next = list->head;
        list->head = node;
    }
    else{
        node->next = NULL;
        list->head = node;
    }
    
    return;
}
    
void insertNode(list_t* list, node_t* nodeA, node_t* nodeB){
    if(nodeB == NULL) return;
    
    if(nodeA){
        nodeB->next = nodeA->next;
        nodeA->next = nodeB;
    }
    else{
        nodeB->next = NULL;
        list->head = nodeB;
    }
    return;
}

